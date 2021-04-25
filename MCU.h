/*
 * MCU.h
 *
 * Created: 4/7/2021 10:55:26 PM
 *  Author: ahmed
 */ 


#ifndef MCU_H_
#define MCU_H_

#define DDRA (*(volatile char*)(0x3A))
#define PORTA (*(volatile char*)(0x3B))
#define PINA (*(volatile char*)(0x39))

#define DDRB (*(volatile char*)(0x37))
#define PORTB (*(volatile char*)(0x38))
#define PINB (*(volatile char*)(0x36))

#define DDRC (*(volatile char*)(0x34))
#define PORTC (*(volatile char*)(0x35))
#define PINC (*(volatile char*)(0x33))

#define DDRD (*(volatile char*)(0x31))
#define PORTD (*(volatile char*)(0x32))
#define PIND (*(volatile char*)(0x30))
/***************************************** EXT INT ********************************************/
#define  SREG (*(volatile char*)(0x5F))
#define  GICR (*(volatile char*)(0x5B))
#define  GIFR (*(volatile char*)(0x5A))
#define  MCUCR (*(volatile char*)(0x55))
#define  MCUCSR (*(volatile char*)(0x54))

#endif /* MCU_H_ */