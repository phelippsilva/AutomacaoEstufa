/*
 * rtc.c
 * Primeira versao da biblioteca para acessar o modulo de tempo real DS1307
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
 * Converte binario para bcd
 */
unsigned char bin2bcd(unsigned char val) {
	return (val + 6 * (val / 10));
}

/**
 * Converte bcd para binario
 */
unsigned char bcd2bin(unsigned char val) {
	return (val - 6 * (val >> 4));
}

// convert BCD para decimal
unsigned char bcd2dec(unsigned char val) {
	return ((val / 0x10 * 0xA) + (val % 0x10));
}

/**
 * Le os valores do RTC e escreve na memoria apontada por *read
 */
Void lerRTC(char *read) {

#define READ_COUNT 7
	UInt peripheralNum = 0; /* Interface I2C0 */
	I2C_Handle i2c;
	I2C_Params i2cParams;
	I2C_Transaction i2cTransaction;
	UChar writeBuffer[9];
	writeBuffer[0] = 0;
	UChar readBuffer[READ_COUNT];
	Bool transferOK;
	I2C_Params_init(&i2cParams);
	i2c = I2C_open(peripheralNum, &i2cParams);
	if (i2c == NULL) {
		printf("Nao foi possivel abrir a interface I2C0!\n");
		fflush(stdout);
		return;
	}

	//Seta os parametros para a comunicacao
	i2cTransaction.slaveAddress = 0x68; /* 7-bit peripheral slave address */
	i2cTransaction.writeBuf = writeBuffer; /* Buffer to be written */
	i2cTransaction.writeCount = 1; /* Number of bytes to be written */
	i2cTransaction.readBuf = readBuffer; /* Buffer to be read */
	i2cTransaction.readCount = READ_COUNT; /* Number of bytes to be read */

	//Comunica com o dispositivo
	transferOK = I2C_transfer(i2c, &i2cTransaction);
	if (!transferOK) {
		printf("Falha na comunicacao\n\tDispositivo externo nao encontrado!\n");
		fflush(stdout);
		I2C_close(i2c);
		return;
	}

	//converte os valores lidos e escreve na memoria do microcontrolador
	*(read) = bcd2dec(readBuffer[3]); //dia da semana
	*(read + 1) = bcd2dec(readBuffer[4]); //dia
	*(read + 2) = bcd2dec(readBuffer[5]); //mes
	*(read + 3) = bcd2dec(readBuffer[6]); //ano
	*(read + 4) = bcd2dec(readBuffer[2]) & 0x3f; //hora
	*(read + 5) = bcd2dec(readBuffer[1]); //minuto
	*(read + 6) = bcd2dec(readBuffer[0]) & 0x7f; //segundo

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
		printf("Nao foi possivel abrir a interface I2C0!\n");
		fflush(stdout);
		return;
	}

	/**Seta os parametros para a comunicacao
	 * para confirmar se o dispositivo esta conectado.
	 */
	i2cTransaction.slaveAddress = 0x68; /* 7-bit peripheral slave address */
	i2cTransaction.writeBuf = writeBuffer; /* Buffer to be written */
	i2cTransaction.writeCount = 1; /* Number of bytes to be written */
	i2cTransaction.readBuf = NULL; /* Buffer to be read */
	i2cTransaction.readCount = 0; /* Number of bytes to be read */
	writeBuffer[0] = 0;

	Task_sleep(5);
	//Comunica com o dispositivo
	transferOK = I2C_transfer(i2c, &i2cTransaction);
	if (!transferOK) {
		printf("Falha na comunicacao\n\tDispositivo externo nao encontrado!\n");
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

	printf("Calendario");
	do {
		printf("\n\tDia da semana (Domingo=1)[-1 cancela]: ");
		fflush(stdout);
		if (scanf("%d", &tmp) != 1) {
			fflush(stdin);
			printf("Aceita somente numeros inteiros!\n");
			fflush(stdout);
		}
		if ((tmp <= 0) || (tmp > 7)) {
			if (tmp == -1) {
				printf("Cancelado!");
				I2C_close(i2c);
				return;
			}
			printf("Somente numeros positivos entre 1 e 7!\n");
		}
	} while ((tmp <= 0) || (tmp > 7));
	fflush(stdin);
	writeBuffer[4] = bin2bcd(tmp);

	do {
		printf("\n\tDia (1-31)[-1 cancela]: ");
		fflush(stdout);
		if (scanf("%d", &tmp) != 1) {
			fflush(stdin);
			printf("Aceita somente numeros inteiros!\n");
			fflush(stdout);
		}
		if ((tmp <= 0) || (tmp > 31)) {
			if (tmp == -1) {
				printf("Cancelado!");
				I2C_close(i2c);
				return;
			}
			printf("Somente numeros positivos entre 1 e 31!\n");
		}
	} while ((tmp <= 0) || (tmp > 31));
	fflush(stdin);
	writeBuffer[5] = bin2bcd(tmp);

	do {
		printf("\n\tMes (1-12)[-1 cancela]: ");
		fflush(stdout);
		if (scanf("%d", &tmp) != 1) {
			fflush(stdin);
			printf("Aceita somente numeros inteiros!\n");
			fflush(stdout);
		}
		if ((tmp <= 0) || (tmp > 12)) {
			if (tmp == -1) {
				printf("Cancelado!");
				I2C_close(i2c);
				return;
			}
			printf("Somente numeros positivos entre 1 e 12!\n");
		}
	} while ((tmp <= 0) || (tmp > 12));
	fflush(stdin);
	writeBuffer[6] = bin2bcd(tmp);

	do {
		printf("\n\tAno (somente dois ultimos digitos)[-1 cancela]: ");
		fflush(stdout);
		if (scanf("%d", &tmp) != 1) {
			fflush(stdin);
			printf("Aceita somente numeros inteiros!\n");
			fflush(stdout);
		}
		if ((tmp < 0) || (tmp > 99)) {
			if (tmp == -1) {
				printf("Cancelado!");
				I2C_close(i2c);
				return;
			}
			printf("Somente numeros positivos entre 00 e 99!\n");
		}
	} while ((tmp < 0) || (tmp > 99));
	fflush(stdin);
	writeBuffer[7] = bin2bcd(tmp);

	printf("Relogio\n");
	do {
		printf("\n\tHora [-1 cancela]: ");
		fflush(stdout);
		if (scanf("%d", &tmp) != 1) {
			fflush(stdin);
			printf("Aceita somente numeros inteiros!\n");
			fflush(stdout);
		}
		if ((tmp < 0) || (tmp > 23)) {
			if (tmp == -1) {
				printf("Cancelado!");
				I2C_close(i2c);
				return;
			}
			printf("Somente numeros positivos entre 00 e 23!\n");
		}
	} while ((tmp < 0) || (tmp > 23));
	fflush(stdin);
	writeBuffer[3] = bin2bcd(tmp);

	do {
		printf("\n\tMinuto [-1 cancela]: ");
		fflush(stdout);
		if (scanf("%d", &tmp) != 1) {
			fflush(stdin);
			printf("Aceita somente numeros inteiros!\n");
			fflush(stdout);
		}
		if ((tmp < 0) || (tmp > 59)) {
			if (tmp == -1) {
				printf("Cancelado!");
				I2C_close(i2c);
				return;
			}
			printf("Somente numeros positivos entre 00 e 59!\n");
		}
	} while ((tmp < 0) || (tmp > 59));
	fflush(stdin);
	writeBuffer[2] = bin2bcd(tmp);

	do {
		printf("\n\tSegundo [-1 cancela]: ");
		fflush(stdout);
		if (scanf("%d", &tmp) != 1) {
			fflush(stdin);
			printf("Aceita somente numeros inteiros!\n");
			fflush(stdout);
		}
		if ((tmp < 0) || (tmp > 59)) {
			if (tmp == -1) {
				printf("Cancelado!");
				I2C_close(i2c);
				return;
			}
			printf("Somente numeros positivos entre 00 e 59!\n");
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

	Task_sleep(5);
	//Comunica com o dispositivo
	transferOK = I2C_transfer(i2c, &i2cTransaction);
	if (!transferOK) {
		printf("Falha na comunicacao\n\tDispositivo externo nao encontrado!\n");
		fflush(stdout);
		I2C_close(i2c);
		return;
	}
	I2C_close(i2c);
	printf("Relogio ajustado!");
}


bool minutoRTC(char *read) {

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
		printf("Nao foi possivel abrir a interface I2C0!\n");
		fflush(stdout);
		return false;
	}

	//Seta os parametros para a comunicacao
	i2cTransaction.slaveAddress = 0x68; /* 7-bit peripheral slave address */
	i2cTransaction.writeBuf = writeBuffer; /* Buffer to be written */
	i2cTransaction.writeCount = 1; /* Number of bytes to be written */
	i2cTransaction.readBuf = readBuffer; /* Buffer to be read */
	i2cTransaction.readCount = READ_COUNT; /* Number of bytes to be read */

	Task_sleep(5);
	//Comunica com o dispositivo
	transferOK = I2C_transfer(i2c, &i2cTransaction);
	if (!transferOK) {
		printf("Falha na comunicacao\n\tDispositivo externo nao encontrado!\n");
		fflush(stdout);
		I2C_close(i2c);
		return false;
	}

	//converte os valores lidos e escreve na mem�ria
	*read = bcd2dec(readBuffer[1]); //minuto
	I2C_close(i2c);// fecha comunicacao I2C
	return true;
}
