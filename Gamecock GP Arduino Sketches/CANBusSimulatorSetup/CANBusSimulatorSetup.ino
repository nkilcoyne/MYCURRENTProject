// EDITED BY Nathaniel Kilcoyne, 2021-02


#include <SPI.h>
#include "mcp_can.h"

/*SAMD core*/
#ifdef ARDUINO_SAMD_VARIANT_COMPLIANCE
    #define SERIAL SerialUSB
#else
    #define SERIAL Serial
#endif

// the cs pin of the version after v1.1 is default to D9
// v0.9b and v1.0 is default D10
const int SPI_CS_PIN = 9;
const int LED        = 8;
boolean ledON        = 1;

MCP_CAN CAN(SPI_CS_PIN);    // Set CS pin


// CAN SHIELD INITIALIZATION
void setup() {
    SERIAL.begin(115200); // establishing bitrate
    pinMode(LED, OUTPUT);

    while (CAN_OK != CAN.begin(CAN_500KBPS)) {   // baudrate = 500k -> same as bitrate
        SERIAL.println("CAN BUS Shield init fail");
        SERIAL.println("Init CAN BUS Shield again");
        delay(100); // delay 100 milliseconds (ms)
    }
    SERIAL.println("CAN BUS Shield init ok!"); // initialization complete
}


void loop() {
    unsigned char len = 0;
    unsigned char buf[8];
    //byte len = 0;
    //byte buf[8];

    if (CAN_MSGAVAIL == CAN.checkReceive()) {     // check if data is coming in on CAN
        CAN.readMsgBuf(&len, buf);    // read incoming data,  len: data length, buf: data buf ("data array")

       
        unsigned long canId = CAN.getCanId();
        
        SERIAL.print("CAN ID: ");
        SERIAL.print(canId, HEX);  // print out CAN ID in HEX
        SERIAL.print(" Buffer: ");
        for (int i = 0; i < 8; i++) {
            SERIAL.print(buf[i], HEX);  // dump each byte of buffer in HEX
            SERIAL.print(" ");  // spacing
        }
        SERIAL.println();

        delay(500);

    }
}

//END FILE
