/*
 * rtc.c
 * Primeira vers�o da biblioteca para acessar o m�dulo de tempo real DS1307
 *
 *  Created on: 18/08/2014
 *      Author: Tiago
 */
#include "rtc.h"

/**
 * Converte decimal para bcd
 */
unsigned char dec2bcd(unsigned char val) {
	return ((val / 0xA * 0x10) + (val % 0xA));
}

/**
 * Converte bin�rio para bcd
 */
unsigned char bin2bcd(unsigned char val) {
	return (val + 6 * (val / 10));
}

/**
 * Converte bcd para bin�rio
 */
unsigned char bcd2bin(unsigned char val) {
	return (val - 6 * (val >> 4));
}

// convert BCD para decimal
unsigned char bcd2dec(unsigned char val) {
	return ((val / 0x10 * 0xA) + (val % 0x10));
}

/**
 * L� os valores do RTC e escreve na mem�ria apontada por *read
 */
Void lerRTC(UChar *read) {

#define READ_COUNT 7
	I2C_Handle i2c;
	UInt peripheralNum = 0; /* Interface I2C0 */
	I2C_Params i2cParams;
	I2C_Transaction i2cTransaction;
	UChar writeBuffer[9];
	writeBuffer[0] = 0;
	UChar readBuffer[READ_COUNT];
	Bool transferOK;
	I2C_Params_init(&i2cParams);
	i2c = I2C_open(peripheralNum, &i2cParams);
	if (i2c == NULL) {
		printf("N�o foi poss�vel abrir a interface I2C0!\n");
		fflush(stdout);
		return;
	}

	//Seta os par�metros para a comunica��o
	i2cTransaction.slaveAddress = 0x68; /* 7-bit peripheral slave address */
	i2cTransaction.writeBuf = writeBuffer; /* Buffer to be written */
	i2cTransaction.writeCount = 1; /* Number of bytes to be written */
	i2cTransaction.readBuf = readBuffer; /* Buffer to be read */
	i2cTransaction.readCount = READ_COUNT; /* Number of bytes to be read */

	Task_sleep(100);
	//Comunica com o dispositivo
	transferOK = I2C_transfer(i2c, &i2cTransaction);
	if (!transferOK) {
		printf("Falha na comunica��o\n\tDispositivo externo n�o encontrado!");
		fflush(stdout);
		I2C_close(i2c);
		return;
	}

	//converte os valores lidos e escreve na mem�ria do microcontrolador
	*(read) = bcd2dec(readBuffer[3]); //dia da semana
	*(read + 1) = bcd2dec(readBuffer[4]); //dia
	*(read + 2) = bcd2dec(readBuffer[5]); //mes
	*(read + 3) = bcd2dec(readBuffer[6]); //ano
	*(read + 4) = bcd2dec(readBuffer[2]) & 0x3f; //hora
	*(read + 5) = bcd2dec(readBuffer[1]); //minuto
	*(read + 6) = bcd2dec(readBuffer[0]) & 0x7f; //segundo

//Mostra na tela os valores lidos
//	printf("%d h:%d m:%d s", *(read + 4), *(read + 5), *(read+ 6));
//	fflush(stdout);
//	printf(" - %d - ", *(read));
//	fflush(stdout);
//	printf("%d/%d/%d ", *(read + 1), *(read + 2), *(read + 3));
//	printf("\n");
//	fflush(stdout);

	I2C_close(i2c);
}

Void ajustarRTC() {
	int tmp;

	I2C_Handle i2c;
	UInt peripheralNum = 0; /* Interface I2C0 */
	I2C_Params i2cParams;
	I2C_Transaction i2cTransaction;
	UChar writeBuffer[9];
	Bool transferOK;

	I2C_Params_init(&i2cParams);
	//Abre a interface I2C
	i2c = I2C_open(peripheralNum, &i2cParams);
	if (i2c == NULL) {
		printf("N�o foi poss�vel abrir a interface I2C0!\n");
		fflush(stdout);
		return;
	}

	/**Seta os par�metros para a comunica��o
	 * para confirmar se o dispositivo est� conectado.
	 */
	i2cTransaction.slaveAddress = 0x68; /* 7-bit peripheral slave address */
	i2cTransaction.writeBuf = writeBuffer; /* Buffer to be written */
	i2cTransaction.writeCount = 1; /* Number of bytes to be written */
	i2cTransaction.readBuf = NULL; /* Buffer to be read */
	i2cTransaction.readCount = 0; /* Number of bytes to be read */
	writeBuffer[0] = 0;

	Task_sleep(10);
	//Comunica com o dispositivo
	transferOK = I2C_transfer(i2c, &i2cTransaction);
	if (!transferOK) {
		printf("Falha na comunica��o\n\tDispositivo externo n�o encontrado!");
		fflush(stdout);
		I2C_close(i2c);
		return;
	}

	/*
	 * Procedimento para ajustar a hora do RTC
	 */
	//	writeBuffer[0] sempre em 0
	//	writeBuffer[1] segundo
	//	writeBuffer[2] minuto
	//	writeBuffer[3] hora
	//	writeBuffer[4] dia da semana
	//	writeBuffer[5] dia
	//	writeBuffer[6] mes
	//	writeBuffer[7] ano
	//	writeBuffer[8] sempre em 0
	writeBuffer[0] = 0;	//inicio

	printf("Calend�rio");
	do {
		printf("\n\tDia da semana (Domingo=1)[-1 cancela]: ");
		fflush(stdout);
		if (scanf("%d", &tmp) != 1) {
			fflush(stdin);
			printf("Aceita somente n�meros inteiros!\n");
			fflush(stdout);
		}
		if ((tmp <= 0) || (tmp > 7)) {
			if (tmp == -1) {
				printf("Cancelado!");
				I2C_close(i2c);
				return;
			}
			printf("Somente numeros positivos entre 1 e 7!");
		}
	} while ((tmp <= 0) || (tmp > 7));
	fflush(stdin);
	writeBuffer[4] = bin2bcd(tmp);

	do {
		printf("\n\tDia (1-31)[-1 cancela]: ");
		fflush(stdout);
		if (scanf("%d", &tmp) != 1) {
			fflush(stdin);
			printf("Aceita somente n�meros inteiros!\n");
			fflush(stdout);
		}
		if ((tmp <= 0) || (tmp > 31)) {
			if (tmp == -1) {
				printf("Cancelado!");
				I2C_close(i2c);
				return;
			}
			printf("Somente numeros positivos entre 1 e 31!");
		}
	} while ((tmp <= 0) || (tmp > 31));
	fflush(stdin);
	writeBuffer[5] = bin2bcd(tmp);

	do {
		printf("\n\tM�s (1-12)[-1 cancela]: ");
		fflush(stdout);
		if (scanf("%d", &tmp) != 1) {
			fflush(stdin);
			printf("Aceita somente n�meros inteiros!\n");
			fflush(stdout);
		}
		if ((tmp <= 0) || (tmp > 12)) {
			if (tmp == -1) {
				printf("Cancelado!");
				I2C_close(i2c);
				return;
			}
			printf("Somente numeros positivos entre 1 e 12!");
		}
	} while ((tmp <= 0) || (tmp > 12));
	fflush(stdin);
	writeBuffer[6] = bin2bcd(tmp);

	do {
		printf("\n\tAno (somente dois ultimos digitos)[-1 cancela]: ");
		fflush(stdout);
		if (scanf("%d", &tmp) != 1) {
			fflush(stdin);
			printf("Aceita somente n�meros inteiros!\n");
			fflush(stdout);
		}
		if ((tmp < 0) || (tmp > 99)) {
			if (tmp == -1) {
				printf("Cancelado!");
				I2C_close(i2c);
				return;
			}
			printf("Somente numeros positivos entre 00 e 99!");
		}
	} while ((tmp < 0) || (tmp > 99));
	fflush(stdin);
	writeBuffer[7] = bin2bcd(tmp);

	printf("Rel�gio\n");
	do {
		printf("\n\tHora [-1 cancela]: ");
		fflush(stdout);
		if (scanf("%d", &tmp) != 1) {
			fflush(stdin);
			printf("Aceita somente n�meros inteiros!\n");
			fflush(stdout);
		}
		if ((tmp < 0) || (tmp > 23)) {
			if (tmp == -1) {
				printf("Cancelado!");
				I2C_close(i2c);
				return;
			}
			printf("Somente numeros positivos entre 00 e 23!");
		}
	} while ((tmp < 0) || (tmp > 23));
	fflush(stdin);
	writeBuffer[3] = bin2bcd(tmp);

	do {
		printf("\n\tMinuto [-1 cancela]: ");
		fflush(stdout);
		if (scanf("%d", &tmp) != 1) {
			fflush(stdin);
			printf("Aceita somente n�meros inteiros!\n");
			fflush(stdout);
		}
		if ((tmp < 0) || (tmp > 59)) {
			if (tmp == -1) {
				printf("Cancelado!");
				I2C_close(i2c);
				return;
			}
			printf("Somente numeros positivos entre 00 e 59!");
		}
	} while ((tmp < 0) || (tmp > 59));
	fflush(stdin);
	writeBuffer[2] = bin2bcd(tmp);

	do {
		printf("\n\tSegundo [-1 cancela]: ");
		fflush(stdout);
		if (scanf("%d", &tmp) != 1) {
			fflush(stdin);
			printf("Aceita somente n�meros inteiros!\n");
			fflush(stdout);
		}
		if ((tmp < 0) || (tmp > 59)) {
			if (tmp == -1) {
				printf("Cancelado!");
				I2C_close(i2c);
				return;
			}
			printf("Somente numeros positivos entre 00 e 59!");
		}
	} while ((tmp < 0) || (tmp > 59));
	fflush(stdin);
	writeBuffer[1] = bin2bcd(tmp);

	writeBuffer[8] = 0; //fim

	/**
	 * Executa o ajuste
	 */
	i2cTransaction.slaveAddress = 0x68; /* endere�o do dispositivo na rede */
	i2cTransaction.writeBuf = writeBuffer; /* Buffer de escrita */
	i2cTransaction.writeCount = 9; /* Numeros de bytes do buffer */
	i2cTransaction.readBuf = NULL; /* Buffer para leitura */
	i2cTransaction.readCount = 0; /* Numero de bytes para leitura ( */

	Task_sleep(100);
	//Comunica com o dispositivo
	transferOK = I2C_transfer(i2c, &i2cTransaction);
	if (!transferOK) {
		printf("Falha na comunica��o\n\tDispositivo externo n�o encontrado!");
		fflush(stdout);
		I2C_close(i2c);
		return;
	}
	I2C_close(i2c);
	printf("Rel�gio ajustado!");
}
