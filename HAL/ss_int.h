/*
 * int.h
 *
 *  Created on: Dec 6, 2023
 *      Author: ahmed
 */

#ifndef INT_H_
#define INT_H_

#include "../LIB/BIT_MATH.h"
#include "../LIB/TYPES.h"
#include "../MCAL/DIO/dio_int.h"
#define  SS_type cathode

#define zero   0
#define one    1
#define two    2
#define three  3
#define four   4
#define five   5
#define six    6
#define seven  7
#define eight  8
#define nine   9
#define OUTPUT 0XFF
#define INPUT  0X00



void ss_voidinit(u8 u8ss_port);
void SS_voidDisplayNumer(u8 u8ssPort, u8 u8Num);
void SS_voidDisp2digts(u8 u8ssPort1,u8 u8ssPort2, u8 u8Num);
#endif /* INT_H_ */
