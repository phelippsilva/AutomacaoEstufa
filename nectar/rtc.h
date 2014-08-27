/*
 * rtc.h
 *
 *  Created on: 18/08/2014
 *      Author: Tiago
 *
 *      Pinagem:
 *      SCL: PB2
 *      SDA: PB3
 */
/* XDCtools Header files */
#include <xdc/cfg/global.h>

/* TI-RTOS Header files */
#include <ti/drivers/I2C.h>

#include <stdio.h>


#ifndef RTC_H_
#define RTC_H_

extern unsigned char dec2bcd(unsigned char val);
extern unsigned char bin2bcd(unsigned char val);
extern unsigned char bcd2bin(unsigned char val);
extern unsigned char bcd2dec(unsigned char val);
extern Void lerRTC(char *read);
extern Void ajustarRTC();

/*!
 * Função que retorna
 */
extern bool minutoRTC(char *read);
#endif /* RTC_H_ */
