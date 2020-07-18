/*
 * SPI.c
 *
 *  Created on: Jul 10, 2020
 *      Author: Nathan
 */
#include "stm32f7xx_hal.h"
#include "stm32f7xx_hal_spi.h"

#include "SPI.h"


extern SPI_HandleTypeDef hspi2;

byte SPIClass::transfer(byte _data) {

	byte rxData = 0;
	HAL_SPI_TransmitReceive(&hspi2, &_data, &rxData, 1, 500);
	return rxData;
}
