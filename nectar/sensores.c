/*
 * sensores.c
 *
 *  Created on: 28/08/2014
 *      Author: usuario
 */

#include "sensores.h"

bool lerSensor(UChar *dados, int qtd) {

	//#define READ_COUNT qtd
	I2C_Handle i2c;
	I2C_Params i2cParams;
	I2C_Transaction i2cTransaction;
	//int count=0;
	//UChar writeBuffer[1];
	//writeBuffer[0] = 0;
	//UChar readBuffer[READ_COUNT];
	Bool transferOK;
	I2C_Params_init(&i2cParams);
	i2c = I2C_open(Board_I2C3, &i2cParams);//abre a interface I2C2
	if (i2c == NULL) {
		printf("Nao foi possivel abrir a interface I2C2!\n");
		fflush(stdout);
		return false;
	}

	//Seta os parametros para a comunicacao
	i2cTransaction.slaveAddress = 1; /* 7-bit peripheral slave address */
	i2cTransaction.writeBuf = NULL; /* Buffer to be written */
	i2cTransaction.writeCount = NULL; /* Number of bytes to be written */
	i2cTransaction.readBuf = dados; /* Buffer to be read */
	i2cTransaction.readCount = qtd; /* Number of bytes to be read */

	//Comunica com o dispositivo
	transferOK = I2C_transfer(i2c, &i2cTransaction);
	if (!transferOK) {
		printf("Falha na comunicacao\n\tDispositivo externo nao encontrado!\n");
		fflush(stdout);
		I2C_close(i2c);
		return false;
	}

//	for(count=0;count<READ_COUNT;count++){
//	*(dados+count) = readBuffer[count];
//	}

	I2C_close(i2c);
	return true;
}
