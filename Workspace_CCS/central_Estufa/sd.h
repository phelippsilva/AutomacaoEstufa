/*
 * sd.h
 *
 *  Created on: 20/08/2014
 *      Author: Tiago
 *
 *      Pinagem:
 *      MOSI: PD1
 *      MISO: PD0
 *      SCK: PD3
 *      SDCS: PC7
 */

/* XDCtools Header files */
#include <xdc/cfg/global.h>

#include <ti/drivers/SDSPI.h>
#include "Board.h"
#include <stdio.h>
#include <string.h>
//#include <stdlib.h>

#ifndef SD_H_
#define SD_H_

/* Buffer size used for the file copy process */
#ifndef CPY_BUFF_SIZE
#define CPY_BUFF_SIZE       1
#endif

/* String conversion macro */
#define STR_(n)             #n
#define STR(n)              STR_(n)

/* Drive number used for FatFs */
#define SD_DRIVE_NUM 0

extern void sdLe();
extern void sdEscreve(char *conteudo, int tamanho);

#endif /* SD_H_ */
