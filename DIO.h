/*
 * IncFile1.h
 *
 * Created: 4/12/2021 10:24:09 PM
 *  Author: ahmed
 */ 
#include "MCU.h"
#include "std.h"
#include "Bit_Math.h"

#ifndef INCFILE1_H_
#define INCFILE1_H_

#define DIO_PORTA        0
#define DIO_PORTB        1
#define DIO_PORTC        2
#define DIO_PORTD        3

#define DIO_PIN0         0
#define DIO_PIN1         1
#define DIO_PIN2         2
#define DIO_PIN3         3
#define DIO_PIN4         4
#define DIO_PIN5         5
#define DIO_PIN6         6
#define DIO_PIN7         7

#define DIO_PIN_INPUT    0
#define DIO_PIN_OUTPUT   1

#define DIO_PORT_INPUT   0
#define DIO_PORT_OUTPUT  1

#define DIO_PIN_ON       1
#define  DIO_PIN_OFF     0

#define DIO_Port_ON      0xff
#define  DIO_Port_OFF    0x00



void DIO_SetPinDir(Uint8 Port, Uint8 Pin, Uint8 Dir);
void DIO_SetPortDir(Uint8 Port, Uint8 Dir);

void DIO_SetPinValue(Uint8 Port, Uint8 Pin, Uint8 Value);
void DIO_SetPortValue(Uint8 Port, Uint8 Value);

Uint8 DIO_GetPinValue(Uint8 Port, Uint8 Pin);
Uint8 DIO_GetPortValue(Uint8 Port);

void DIO_TogglePort(Uint8 Port);
void DIO_TogglePin(Uint8 Port, Uint8 Pin);

#endif /* INCFILE1_H_ */