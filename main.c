

#include <util/delay.h>
#include "HAL/ss_int.h"

int main()
{
	while(1){
		ss_voidinit(DIO_PORTA);
		ss_voidinit(DIO_PORTB);
		ss_voidinit(DIO_PORTC);
		ss_voidinit(DIO_PORTD);

	for(s16 i=30; i>0; i--)
	    {
		SS_voidDisp2digts(DIO_PORTD,DIO_PORTB, i);
		_delay_ms(1000);
	    }
	for(s16 i=30; i>0; i--)
	    {
		SS_voidDisp2digts(DIO_PORTA,DIO_PORTC, i);
		_delay_ms(1000);
		}
	}
}





