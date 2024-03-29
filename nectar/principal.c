/*
 * Copyright (c) 2014, Texas Instruments Incorporated
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *
 * *  Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 *
 * *  Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 *
 * *  Neither the name of Texas Instruments Incorporated nor the names of
 *    its contributors may be used to endorse or promote products derived
 *    from this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO,
 * THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR
 * PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR
 * CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL,
 * EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO,
 * PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS;
 * OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY,
 * WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR
 * OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE,
 * EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

/*
 *  ======== principal.c ========
 */
/* XDCtools Header files */
#include <xdc/std.h>
#include <xdc/cfg/global.h>
#include <xdc/runtime/System.h>

/* BIOS Header files */
#include <ti/sysbios/BIOS.h>
#include <ti/sysbios/knl/Clock.h>

/* TI-RTOS Header files */
// #include <ti/drivers/EMAC.h>
#include <ti/drivers/GPIO.h>
#include <ti/drivers/I2C.h>
#include <ti/drivers/SDSPI.h>
// #include <ti/drivers/SPI.h>
#include <ti/drivers/UART.h>
// #include <ti/drivers/USBMSCHFatFs.h>
// #include <ti/drivers/Watchdog.h>

/* Example/Board Header files */
#include "../Board.h"

//minhas inclusões
#include "UARTUtils.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//#include <stdint.h>

#include "rtc.h"
#include "sd.h"
#include "sensores.h"

int controle = 0;
int *p_controle = &controle;

/*
 *  ======== heartBeatFxn ========
 *  Toggle the Board_LED0. The Task_sleep is determined by arg0 which
 *  is configured for the heartBeat Task instance.
 */
Void heartBeatFxn(UArg arg0, UArg arg1) {
	char data[7];

	while (1) {
		//Task_sleep((UInt) arg0);
		Task_sleep(10);
		if (*p_controle == 1) {
			GPIO_toggle(Board_LED0);
			lerRTC(data);
		} else {
			GPIO_write(Board_LED0, Board_LED_OFF);
		}
	}
}

Void consoleFxn(UArg arg0, UArg arg1) {
	char input[128];
	char data[7];
	char conteudo[50];
	char minuto[1];
	UChar sensor[6];
	//int qtd = 0;


	printf("======== Bem vindo ao sistema da estufa ========\n");
	fflush(stdout);
	fflush(stdin);

	while (true) {
		/* Get the user's input */
		scanf("%s", input);
		/* Flush the remaining characters from stdin since they are not used. */
		fflush(stdout);
		fflush(stdin);

		//cuidado com a quantidade de caracteres!
		if (!strcmp(input, "oi")) {
			printf("Oi, como vai voce?\n"
					"Os comandos disponiveis sao os seguintes:\n\t"
					"\"agora\", para saber a data e hora\n\t"
					"\"ajustar\", para ajsutar o RTC\n\t");
			printf("\"ler\", para ler o conteudo do arquivo \"input.txt\","
					" que esta no cartao de memoria\n\t"
					"\"escreve\", escreve uma linha no arquivo\n\t");
			printf("\"apaga\", para apagar o arquivo \"input.txt\","
					" que esta no cartao de memoria\n\t"
					"\"i2c\", le da porta i2c a cada 10 ms\n\t");
			printf("\"para\", para de ler da porta i2c,\n\t"
					"\"sensor\", le dados do sensor atraves do i2c\n\t");
			printf("\"minuto\", ler minuto atual do RTC.\n");
		} else if (!strcmp(input, "agora")) {
			lerRTC(data);
			switch (data[0]) {
			case 1:
				printf("Domingo");
				fflush(stdout);
				break;
			case 2:
				printf("Segunda-feira");
				fflush(stdout);
				break;
			case 3:
				printf("Terca-feira");
				fflush(stdout);
				break;
			case 4:
				printf("Quarta-feira");
				fflush(stdout);
				break;
			case 5:
				printf("Quinta-feira");
				fflush(stdout);
				break;
			case 6:
				printf("Sexta-feira");
				fflush(stdout);
				break;
			case 7:
				printf("Sabado");
				fflush(stdout);
				break;
			}
			printf(", %d do %d de %d", data[1], data[2], 2000 + data[3]);
			fflush(stdout);
			printf(". %d:%d:%d\n", data[4], data[5], data[6]);
			fflush(stdout);
		} else if (!strcmp(input, "ajustar")) {
			ajustarRTC();
		} else if (!strcmp(input, "ler")) {
			sdLe();
		} else if (!strcmp(input, "escreve")) {
			printf("Digite uma linha de conteudo: ");
			fgets(conteudo, sizeof(conteudo), stdin);
			sdEscreve(conteudo, sizeof(conteudo));
		} else if (!strcmp(input, "moo")) {
			printf("Ainda naoo tenho easter eggs!\n");
			fflush(stdout);
		} else if (!strcmp(input, "i2c")) {
			controle = 1;
		} else if (!strcmp(input, "para")) {
			controle = 0;
		} else if (!strcmp(input, "minuto")) {
			if (minutoRTC(minuto)) {
				printf("Minuto atual: %d\n", minuto[0]);
				fflush(stdout);
			} else {
				printf("Nao foi possivel ler o minuto.\n");
				fflush(stdout);
			}
		} else if (!strcmp(input, "sensor")) {
			//printf("Quantos bytes? ");
			//fflush(stdout);
			//scanf("%d", &qtd);
			//fflush(stdin);
			if (lerSensor(sensor, 1)) {
				printf("Sensor disse: %d\n", sensor[0]);
				fflush(stdout);
				fflush(stdin);
			} else {
				printf("Nao foi possivel ler o sensor.\n");
				fflush(stdout);
			}
		} else if (!strcmp(input, "apaga")) {
			sdApaga("input");
		}
//								else if (!strcmp(input, "sair")) {
//								/* Exit the console task */
//								printf("Deseja sair do console: S/N? ");
//								fflush(stdout);
//								scanf("%s", input);
//								fflush(stdin);
//								if ((input[0] == 's' || input[0] == 'S')
//										&& input[1] == 0x00) {
//									break;
//								}
//							}
		else {
			printf("Comando nao encontrado!\n");
		}
	}
	//Task_exit();
}
/*
 *  ======== main ========
 */
int main(void) {
	/* Call board init functions. */
	Board_initGeneral();
// Board_initEMAC();
	Board_initGPIO();
	Board_initI2C();
	Board_initSDSPI();
// Board_initSPI();
	Board_initUART();
// Board_initUSB(Board_USBDEVICE);
// Board_initUSBMSCHFatFs();
// Board_initWatchdog();

	/* Turn off user LEDs */
	GPIO_write(Board_LED0, Board_LED_OFF);
	GPIO_write(Board_LED1, Board_LED_OFF);
	GPIO_write(Board_LED2, Board_LED_OFF);

	/*
	 *  Add the UART device to the system.
	 *  All UART peripherals must be setup and the module must be initialized
	 *  before opening.  This is done by Board_initUART().  The functions used
	 *  are implemented in UARTUtils.c.
	 */
	add_device("UART", _MSA, UARTUtils_deviceopen, UARTUtils_deviceclose,
			UARTUtils_deviceread, UARTUtils_devicewrite, UARTUtils_devicelseek,
			UARTUtils_deviceunlink, UARTUtils_devicerename);

	/* Open UART0 for writing to stdout and set buffer */
	freopen("UART:0", "w", stdout);
	setvbuf(stdout, NULL, _IOLBF, 128);

	/* Open UART0 for reading from stdin and set buffer */
	freopen("UART:0", "r", stdin);
	setvbuf(stdin, NULL, _IOLBF, 128);

	/*
	 *  Initialize UART port 0 used by SysCallback.  This and other SysCallback
	 *  UART functions are implemented in UARTUtils.c. Calls to System_printf
	 *  will go to UART0, the same as printf.
	 */
	UARTUtils_systemInit(0);

	System_printf("Starting the example\nSystem provider is set to SysMin. "
			"Halt the target to view any SysMin contents in ROV.\n");
	/* SysMin will only print to the console when you call flush or exit */
	System_flush();

	/* Start BIOS */
	BIOS_start();

	return (0);
}
