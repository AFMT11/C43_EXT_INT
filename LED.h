/*
 * LED.h
 *
 * Created: 4/12/2021 8:55:57 PM
 *  Author: ahmed
 */ 

#include "MCU.h"
#include "std.h"
#include "Bit_Math.h"
#include "DIO.h"

#ifndef LED_H_
#define LED_H_
void LED_INT(void);
void LED0_ON(void);
void LED1_ON(void);
void LED2_ON(void);
void LED0_TOGGLE(void);
void LED1_TOGGLE(void);
void LED2_TOGGLE(void);
void LED0_OFF(void);
void LED1_OFF(void);
void LED2_OFF(void);
void Get_Pin(void);



#endif /* LED_H_ */