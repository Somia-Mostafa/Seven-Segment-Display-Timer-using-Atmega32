

#ifndef DIO_INT_H_
#define DIO_INT_H_


#include "dio_private.h"
#include "../../LIB/BIT_MATH.h"
#include "../../LIB/TYPES.h"



#define DIO_PORTA 0
#define DIO_PORTB 1
#define DIO_PORTC 2
#define DIO_PORTD 3

#define DIO_PIN0 0
#define DIO_PIN1 1
#define DIO_PIN2 2
#define DIO_PIN3 3
#define DIO_PIN4 4
#define DIO_PIN5 5
#define DIO_PIN6 6
#define DIO_PIN7 7


#define DIO_HIGH 1
#define DIO_LOW  0

#define DIO_PIN_INPUT  0
#define DIO_PIN_OUTPUT 1


#define DIO_PORT_OUTPUT  0XFF
#define DIO_PORT_INPUT   0X00


void DIO_voidSetPinDir(u8 u8PortId, u8 u8PinId, u8 u8PinDir);
void DIO_voidSetPinVal(u8 u8PortId, u8 u8PinId, u8 u8PinVal);
//u8 DIO_u8GetPinVal(u8 u8PortId, u8 u8PinId);
void DIO_voidSetPortDir(u8 u8PortId, u8 u8PortDir);
void DIO_voidSetPortVal(u8 u8PortId, u8 u8PortVal);



#endif /* DIO_INT_H_ */
