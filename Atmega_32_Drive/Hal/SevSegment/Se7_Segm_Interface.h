/*
 * Se7_Segm_Interface.h
 *
 *  Created on: Sep 6, 2026
 *      Author: samsung
 */

#ifndef HAL_SEVSEGMENT_SE7_SEGM_INTERFACE_H_
#define HAL_SEVSEGMENT_SE7_SEGM_INTERFACE_H_
//**************************************************
#include <stdint.h>
#include "Se7_Segm_Private.h"
#include "Se7_Segm_Config.h"

void SSD_Init(uint8_t SSD_ID);

void SSD_DisplayNo(uint8_t SSD_ID , uint8_t Number);

//**********************************************************************
#endif /* HAL_SEVSEGMENT_SE7_SEGM_INTERFACE_H_ */
