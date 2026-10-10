/*
 * LED_Interface.h
 *
 *  Created on: Sep 5, 2026
 *      Author: samsung
 */

#ifndef HAL_LED_LED_INTERFACE_H_
#define HAL_LED_LED_INTERFACE_H_
//**********************************************************
//note the diffrance betwen PostBulid , PreBulid
#include <stdint.h>
#include "../../Mcal/DIO/DIO_Interface.h"

#include "Led_Private.h"

void Led_Init(uint8_t LedGroup,uint8_t LedPin);
//I should note the type of conection of led(source & sink )........
//But this not importani in intialization i need it in working......
//(17,21,23,) No of line of Working code............................
void Led_On(uint8_t LedGroup,uint8_t LedPin,uint8_t ConnectionType);

void Led_Off(uint8_t LedGroup,uint8_t LedPin,uint8_t ConnectionType);

void Led_Toggle(uint8_t LedGroup,uint8_t LedPin);



#endif /* HAL_LED_LED_INTERFACE_H_ */
