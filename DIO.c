/*
 * DIO.c
 *
 * Created: 4/12/2021 10:24:02 PM
 *  Author: ahmed
 */ 

#include "DIO.h"

void DIO_SetPinDir(Uint8 Port, Uint8 Pin, Uint8 Dir)
{
	switch(Dir)
	{
		case DIO_PIN_OUTPUT:
		switch(Port)
		{
			case DIO_PORTA:
			Set_Bit(DDRA,Pin);
			break;
			case DIO_PORTB:
			Set_Bit(DDRB,Pin);
			break;
			case DIO_PORTC:
			Set_Bit(DDRC,Pin);
			break;
			case DIO_PORTD:
			Set_Bit(DDRD,Pin);
			break;
			default:
			break;
		}
		break;
		case DIO_PIN_INPUT:
		switch(Port)
		{
			case DIO_PORTA:
			clear_Bit(DDRA,Pin);
			break;
			case DIO_PORTB:
			clear_Bit(DDRB,Pin);
			break;
			case DIO_PORTC:
			clear_Bit(DDRC,Pin);
			break;
			case DIO_PORTD:
			clear_Bit(DDRD,Pin);
			break;
			default:
			break;
		}
		break;		
	}	
}
void DIO_SetPortDir(Uint8 Port, Uint8 Dir)
{
	switch(Port)
	{
		case DIO_PORTA:
		DDRA = Dir;
		break;
		case DIO_PORTB:
		DDRB = Dir;
		break;
		case DIO_PORTC:
		DDRC = Dir;
		break;
		case DIO_PORTD:
		DDRD = Dir;
		break;
	}
	
}
void DIO_SetPinValue(Uint8 Port, Uint8 Pin, Uint8 Value)
{
	switch(Value)
	{
		case DIO_PIN_ON:
		switch(Port)
		{
			case DIO_PORTA:
			Set_Bit(PORTA,Pin);
			break;
			case DIO_PORTB:
			Set_Bit(PORTB,Pin);
			break;
			case DIO_PORTC:
			Set_Bit(PORTC,Pin);
			break;
			case DIO_PORTD:
			Set_Bit(PORTD,Pin);
			break;
			default:
			break;
		}
		break;
		case DIO_PIN_OFF:
		switch(Port)
		{
			case DIO_PORTA:
			clear_Bit(PORTA,Pin);
			break;
			case DIO_PORTB:
			clear_Bit(PORTB,Pin);
			break;
			case DIO_PORTC:
			clear_Bit(PORTC,Pin);
			break;
			case DIO_PORTD:
			clear_Bit(PORTD,Pin);
			break;
			default:
			break;
		}
		break;
	}
}
	void DIO_SetPortValue(Uint8 Port, Uint8 Value)
	{
		switch(Port)
		{
			case DIO_PORTA:
			PORTA = Value;
			break;
			case DIO_PORTB:
			PORTB = Value;
			break;
			case DIO_PORTC:
			PORTC = Value;
			break;
			case DIO_PORTD:
			PORTD = Value;
			break;
		}
		
	}
	Uint8 DIO_GetPinValue(Uint8 Port, Uint8 Pin)
	{
		Uint8 val = 0;
		switch(Port)
		{
			case DIO_PORTA:
			val = Get_Bit(PINA,Pin);
			break;
			case DIO_PORTB:
			val = Get_Bit(PINB,Pin);
			break;
			case DIO_PORTC:
			val = Get_Bit(PINC,Pin);
			break;
			case DIO_PORTD:
			val = Get_Bit(PIND,Pin);
			break;
		}
		return val;
	}
	Uint8 DIO_GetPortValue(Uint8 Port)
	{
		Uint8 val = 0;
		switch(Port)
		{
			case DIO_PORTA:
			val = PINA;
			break;
			case DIO_PORTB:
			val = PINB;
			break;
			case DIO_PORTC:
			val = PINC;
			break;
			case DIO_PORTD:
			val = PIND;
			break;
		}
		return val;
	}

	void DIO_TogglePort(Uint8 Port)
	{
		switch(Port)
		{
			case DIO_PORTA:
			DDRA ^= 0xff;
			break;
			case DIO_PORTB:
			DDRB = 0xff;
			break;
			case DIO_PORTC:
			DDRC = 0xff;
			break;
			case DIO_PORTD:
			DDRD = 0xff;
			break;
		}
	}

void DIO_TogglePin(Uint8 Port, Uint8 Pin)
{
		switch(Port)
		{
			case DIO_PORTA:
			Toggle_Bit(PORTA,Pin);
			break;
			case DIO_PORTB:
			Toggle_Bit(PORTB,Pin);
			break;
			case DIO_PORTC:
			Toggle_Bit(PORTC,Pin);
			break;
			case DIO_PORTD:
			Toggle_Bit(PORTD,Pin);
			break;
			default:
			break;
		}	
}