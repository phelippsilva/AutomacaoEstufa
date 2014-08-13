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
 *  ======== empty.c ========
 */
/* XDCtools Header files */
#include <xdc/std.h>
#include <xdc/cfg/global.h>
#include <xdc/runtime/System.h>

/* BIOS Header files */
#include <ti/sysbios/BIOS.h>

/* TI-RTOS Header files */
// #include <ti/drivers/EMAC.h>
#include <ti/drivers/GPIO.h>
// #include <ti/drivers/I2C.h>
// #include <ti/drivers/SDSPI.h>
// #include <ti/drivers/SPI.h>
#include <ti/drivers/UART.h>
// #include <ti/drivers/USBMSCHFatFs.h>
// #include <ti/drivers/Watchdog.h>

/* Example/Board Header files */
#include "Board.h"

//minhas inclus�es
#include "UARTUtils.h"
//#include <file.h>
#include <stdio.h>
#include <string.h>

/*
 *  ======== heartBeatFxn ========
 *  Toggle the Board_LED0. The Task_sleep is determined by arg0 which
 *  is configured for the heartBeat Task instance.
 */
Void heartBeatFxn(UArg arg0, UArg arg1) {
	while (1) {
		Task_sleep((UInt) arg0);
		GPIO_toggle(Board_LED0);
	}
}

Void consoleFxn(UArg arg0, UArg arg1) {
	char input[128];

	printf("======== Bem Vindo ao sistema da estufa ========\n");
	fflush(stdout);
	while (true) {
		/* Get the user's input */
		scanf("%s", input);
		/* Flush the remaining characters from stdin since they are not used. */
		fflush(stdin);
		printf("Voc� digitou: %s\n", input);
		if (!strcmp(input, "sair")) {
			/* Exit the console task */
			printf("Deseja sair do console: S/N? ");
			fflush(stdout);
			scanf("%s", input);
			fflush(stdin);
			if ((input[0] == 's' || input[0] == 'S') && input[1] == 0x00) {
				printf("Saindo do console, at� mais :)\n");
				Task_exit();
			}
		}
		printf("\nComando: ");
		fflush(stdout);
	}
}
/*
 *  ======== main ========
 */
int main(void) {
	/* Call board init functions. */
	Board_initGeneral();
	// Board_initEMAC();
	Board_initGPIO();
	// Board_initI2C();
	// Board_initSDSPI();
	// Board_initSPI();
	Board_initUART();
	// Board_initUSB(Board_USBDEVICE);
	// Board_initUSBMSCHFatFs();
	// Board_initWatchdog();

	/* Turn on user LED */
	GPIO_write(Board_LED0, Board_LED_ON);

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