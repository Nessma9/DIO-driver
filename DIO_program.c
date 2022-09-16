#include "../../LIB/BIT_MATH.h"
#include "../../LIB/STD_TYPES.h"

#include "DIO_interface.h"
#include "DIO_private.h"
#include "DIO_config.h"

void DIO_voidSetPinDirection(u8 Copy_u8PortName,u8 Copy_u8PinNum,u8 Copy_u8PinMode)
{
	switch(Copy_u8PortName)
	{
		case PORTA:
					switch(Copy_u8PinMode)
					{
						case INPUT  : CLR_BIT(DIO_DDRA,Copy_u8PinNum); break;
						case OUTPUT : SET_BIT(DIO_DDRA,Copy_u8PinNum); break;
					} break;
		case PORTB:
					switch(Copy_u8PinMode)
					{
						case INPUT  : CLR_BIT(DIO_DDRB,Copy_u8PinNum); break;
						case OUTPUT : SET_BIT(DIO_DDRB,Copy_u8PinNum); break;
					} break;
		case PORTC:
					switch(Copy_u8PinMode)
					{
						case INPUT  : CLR_BIT(DIO_DDRC,Copy_u8PinNum); break;
						case OUTPUT : SET_BIT(DIO_DDRC,Copy_u8PinNum); break;
					} break;
		case PORTD:
					switch(Copy_u8PinMode)
					{
						case INPUT  : CLR_BIT(DIO_DDRD,Copy_u8PinNum); break;
						case OUTPUT : SET_BIT(DIO_DDRD,Copy_u8PinNum); break;
					} break;
	}
}

void DIO_voidSetPinValue(u8 Copy_u8PortName,u8 Copy_u8PinNum,u8 Copy_u8PinState)
{
	switch(Copy_u8PortName)
	{
		case PORTA: 
					switch(Copy_u8PinState)
					{
						case LOW       : CLR_BIT(DIO_PORTA,Copy_u8PinNum); break;
						case HIGH      : SET_BIT(DIO_PORTA,Copy_u8PinNum); break;
					} break;
		case PORTB: 
					switch(Copy_u8PinState)
					{
						case LOW       : CLR_BIT(DIO_PORTB,Copy_u8PinNum); break;
						case HIGH      : SET_BIT(DIO_PORTB,Copy_u8PinNum); break;
					} break;
		case PORTC: 
					switch(Copy_u8PinState)
					{
						case LOW       : CLR_BIT(DIO_PORTC,Copy_u8PinNum); break;
						case HIGH      : SET_BIT(DIO_PORTC,Copy_u8PinNum); break;
					} break;
		case PORTD: 
					switch(Copy_u8PinState)
					{
						case LOW       : CLR_BIT(DIO_PORTD,Copy_u8PinNum); break;
						case HIGH      : SET_BIT(DIO_PORTD,Copy_u8PinNum); break;
					} break;
	}
}

u8 DIO_u8GetPinValue(u8 Copy_u8PortName,u8 Copy_u8PinNum)
{
	switch(Copy_u8PortName)
	{
		case PORTA: return GET_BIT(DIO_PINA,Copy_u8PinNum);
		case PORTB: return GET_BIT(DIO_PINB,Copy_u8PinNum);
		case PORTC: return GET_BIT(DIO_PINC,Copy_u8PinNum);
		case PORTD: return GET_BIT(DIO_PIND,Copy_u8PinNum);
	}
}

void DIO_voidSetPortDirection(u8 Copy_u8PortName,u8 Copy_u8PortMode)
{
	switch(Copy_u8PortName)
	{
		case PORTA :
					switch(Copy_u8PortMode)
					{
						case INPUT  : DIO_DDRA = INPUT_PORT_VALUE ; break;
						case OUTPUT : DIO_DDRA = OUTPUT_PORT_VALUE; break;
					} break;
		case PORTB :
					switch(Copy_u8PortMode)
					{
						case INPUT  : DIO_DDRB = INPUT_PORT_VALUE ; break;
						case OUTPUT : DIO_DDRB = OUTPUT_PORT_VALUE; break;
					} break;
		case PORTC :
					switch(Copy_u8PortMode)
					{
						case INPUT  : DIO_DDRC = INPUT_PORT_VALUE ; break;
						case OUTPUT : DIO_DDRC = OUTPUT_PORT_VALUE; break;
					} break;
		case PORTD :
					switch(Copy_u8PortMode)
					{
						case INPUT  : DIO_DDRD = INPUT_PORT_VALUE ; break;
						case OUTPUT : DIO_DDRD = OUTPUT_PORT_VALUE; break;
					} break;
	}
}

void DIO_voidSetPortSpecificValue(u8 Copy_u8PortName,u8 Copy_u8PotVAlue)
{
	switch(Copy_u8PortName)
	{
		case PORTA : DIO_PORTA = Copy_u8PotVAlue; break;
		case PORTB : DIO_PORTB = Copy_u8PotVAlue; break;
		case PORTC : DIO_PORTC = Copy_u8PotVAlue; break;
		case PORTD : DIO_PORTD = Copy_u8PotVAlue; break;
	}
}

u8 DIO_u8GetPortValue(u8 Copy_u8PortName)
{
	switch(Copy_u8PortName)
	{
		case PORTA: return DIO_PINA;
		case PORTB: return DIO_PINB;
		case PORTC: return DIO_PINC;
		case PORTD: return DIO_PIND;
	}
}

