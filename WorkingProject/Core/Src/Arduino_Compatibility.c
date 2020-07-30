/*
 * Arduino_Compatibility.c
 *
 *  Created on: Jul 30, 2020
 *      Author: Nathan
 */
#include "stm32f7xx_hal.h"
#include "Arduino_Compatibility.h"

unsigned long millis(void) {
	return HAL_GetTick();
}

void delay(unsigned long ms) {
	HAL_Delay(ms);
}

