/*
 * Arduino_Compatibility.h
 *
 *  Created on: Jun 9, 2020
 *      Author: Nathan
 */

#ifndef INC_ARDUINO_COMPATIBILITY_H_
#define INC_ARDUINO_COMPATIBILITY_H_

#include <stdint.h>

#define SERIAL  0x0
#define LOW  0x0
#define HIGH 0x1
#define lowByte(w) ((uint8_t) ((w) & 0xff))
#define highByte(w) ((uint8_t) ((w) >> 8))
#define OUTPUT 0x1

#ifdef __cplusplus
extern "C"
{
#endif

typedef uint8_t byte;
unsigned long millis(void);
unsigned long micros(void);
void digitalWrite(uint8_t pin, uint8_t val);
void delay(unsigned long ms);
void delayMicroseconds(unsigned int us);
void pinMode(uint8_t pin, uint8_t mode);

#ifdef __cplusplus
} // extern "C"
#endif




#endif /* INC_ARDUINO_COMPATIBILITY_H_ */
