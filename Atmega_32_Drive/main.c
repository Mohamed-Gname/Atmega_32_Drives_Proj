/*
 * main.c
 *
 *  Created on: Sep 5, 2026
 *      Author: samsung
 */


#include "Mcal/DIO/DIO_Interface.h"
#include "Hal/LED/LED_Interface.h"
#include "Hal/LCD/LCD_Interface.h"
#include "Hal\DC_Motor\DC_Motor_Iterface.h"
#include "Hal\KPD\KPD_Interface.h"
#include "util/delay.h"

//*****************************

//*****************************


void main()
{
	LCD_Init();//Group C.

	while(1)
	{
		LCD_SendCommand(Lcd_ClearScreen);
		LCD_WriteString((uint8_t *)"M_@_G");
		_delay_ms(200);
		LCD_MoveTo(Lcd_Line2, 5);
		LCD_WriteString((uint8_t *)"M_@_G");
		_delay_ms(200);
		LCD_MoveTo(Lcd_Line1, 10);
		LCD_WriteString((uint8_t *)"M_@_G");
		_delay_ms(200);
		LCD_SendCommand(Lcd_ClearScreen);
		_delay_ms(200);


	}
}
