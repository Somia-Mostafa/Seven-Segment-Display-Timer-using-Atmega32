#include "ss_int.h"
#include "../MCAL/DIO/dio_int.h"


void ss_voidinit(u8 u8ss_port)
{
	DIO_voidSetPortDir(u8ss_port,DIO_PORT_OUTPUT);
}
u8 grid[10]=
{
	0b00111111,0b00000110,0b01011011,0b01001111,
	0b01101101,0b011111101,0b00000111,0b01111111,
	0b01101111
};
void SS_voidDisplayNumer(u8 u8ssPort, u8 u8Num)
{
	if(u8Num<10)
	{
#if SS_TYPE == cathode
		DIO_voidSetPortVal (u8ssPort,grid[u8Num]);
#elif SS_TYPE == anode
		DIO_voidSetPortVal (u8ssPort,~grid[u8Num]);
#endif
	}
}
void SS_voidDisp2digts(u8 u8ssPort1,u8 u8ssPort2, u8 u8Num)
{
	if (u8Num <100)
	{
		u8 dig1 = u8Num / 10;
		u8 dig2 = u8Num % 10;

		SS_voidDisplayNumer(u8ssPort1, dig1);
		SS_voidDisplayNumer(u8ssPort2, dig2);
	}


}
