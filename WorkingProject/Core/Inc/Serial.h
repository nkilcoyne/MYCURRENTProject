/*
 * Serial.h
 *
 *  Created on: Jun 16, 2020
 *      Author: Nathan
 */

#ifndef INC_SERIAL_H_
#define INC_SERIAL_H_

class SerialClass {
	public:
		void print(const char* msg);
};


#endif /* INC_SERIAL_H_ */

/*
 * need to create an instance of the spi message on the STM32F746 Board
 * need to check if the values meet the required values to start the CAN board, etc.
 */
/* new byte MCP_CAN::mcp2515_init(const byte ___canSpeed, const byte ___clock - is this a default value) - create a new "init" instance?
 * void MCP_CAN::setSleepWakeup(const byte enable___)  - for setting sleep/wake
 * byte MCP_CAN::sleep() - for sleep
 * byte MCP_CAN::wake() - for wake
 *
 */
