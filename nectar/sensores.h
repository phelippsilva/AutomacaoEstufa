/*
 * sensores.h
 *
 *  Created on: 28/08/2014
 *      Author: Tiago
 *
 *      Pinagem:
 *      SCL: PN5
 *      SDA: PN4
 */
/* XDCtools Header files */
#include <xdc/cfg/global.h>

/* TI-RTOS Header files */
#include <ti/drivers/I2C.h>
#include <../Board.h>

#include <stdio.h>

#ifndef SENSORES_H_
#define SENSORES_H_

extern bool lerSensor(UChar *dados, int qtd);

#endif /* SENSORES_H_ */
