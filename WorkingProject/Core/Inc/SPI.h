/*
 * Copyright (c) 2010 by Cristian Maglie <c.maglie@bug.st>
 * SPI Master library for arduino.
 *
 * This file is free software; you can redistribute it and/or modify
 * it under the terms of either the GNU General Public License version 2
 * or the GNU Lesser General Public License version 2.1, both as
 * published by the Free Software Foundation.
 */

#ifndef _SPI_H_INCLUDED
#define _SPI_H_INCLUDED

#include "Arduino_Compatibility.h"

class SPIClass {
public:
  inline static byte transfer(byte _data);
  // SPI Configuration methods
  inline static void attachInterrupt();
  inline static void detachInterrupt(); // Default
  static void begin(); // Default
  static void end();
  static void setBitOrder(uint8_t);
  static void setDataMode(uint8_t);
  static void setClockDivider(uint8_t);
};
extern SPIClass SPI;
byte SPIClass::transfer(byte _data) {  //fill in from research
	return 0;
}
void SPIClass::attachInterrupt() {  //fill in from research

}
void SPIClass::detachInterrupt() {  //fill in from research

}
#endif
