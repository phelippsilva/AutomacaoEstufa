/*
 * rtc.h
 *
 *  Created on: 18/08/2014
 *      Author: Tiago
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
extern Void lerRTC(UChar *read);
extern Void ajustarRTC();

#endif /* RTC_H_ */