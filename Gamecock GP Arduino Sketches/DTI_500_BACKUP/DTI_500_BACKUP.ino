// EDITED BY Nathaniel Kilcoyne, 2020-9-26


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

        //CAN.isExtendedFrame(); -> returns 1 if it's an extended CAN ID / frame and returns a 0 if not  -- need to figure out how this works in case I need it?
        
        unsigned long canId = CAN.getCanId();
 
        if(canId == 0x00) {  // INPUT VOLTAGE (DC) AND REAL RPM
            unsigned long ERPM = *((unsigned long *)buf); // ERPM -> payload 1-4, right to left 
            unsigned long RealRPM = ERPM/10; // RealRPM = ERPM / (pole pair of 10)
            SERIAL.println("");
            SERIAL.print("The RPM is: ");
            SERIAL.print(RealRPM);
            SERIAL.println(" rpm");
            unsigned int input_voltage = *((unsigned int *)(buf+6)); // INPUT VOLTAGE -> payload 7 & 8
            SERIAL.print("The input voltage is: ");
            SERIAL.print(input_voltage); // use byte 2 of buffer ???????????????
            SERIAL.println(" V"); // print "V" for Volts
            delay(500);
            //SERIAL.println("Buffer 0: ");
            //SERIAL.println(buf[0], HEX);
            //SERIAL.println("Buffer 1: ");
            //SERIAL.println(buf[1], HEX);
            //SERIAL.println("Buffer 2: ");
            //SERIAL.println(buf[2], HEX);
            //SERIAL.println("Buffer 3: ");
            //SERIAL.println(buf[3], HEX);
            //SERIAL.println("Buffer 4: ");
            //SERIAL.println(buf[4], HEX);
            //SERIAL.println("Buffer 5: ");
            //SERIAL.println(buf[5], HEX);
            //SERIAL.println("Buffer 6: ");
            //SERIAL.println(buf[6], HEX);
            //SERIAL.println("Buffer 7: ");
            //SERIAL.println(buf[7], HEX);*/
        }
        else if(canId == 0x01) {  // DC CURRENT  -----------------
            unsigned int DC_current = *((unsigned int *)(buf+6)); // DC CURRENT -> payload 7 & 8
            SERIAL.println("");
            SERIAL.print("The DC Current is: ");
            SERIAL.print(DC_current);
            SERIAL.println(" A"); // print "A" for Amps
            delay(500);
        }
        else if(canId == 0x02) {  // FAULT CODE AND MOTOR TEMPERATURE -----------------
            unsigned int fault_code = buf[3]; // FAULT CODE -> payload 4
            SERIAL.println("");
            SERIAL.println("Error! Fault Code: ");
            SERIAL.println(fault_code);
            unsigned int motor_temp = *((unsigned int *)(buf+4)); // MOTOR TEMPERATURE -> payload 5 & 6
            SERIAL.println("");
            SERIAL.print("The Motor Temperature is: ");
            SERIAL.print(motor_temp);
            SERIAL.println(" degrees (not sure F or C)");
            delay(500);
            //I want to figure out how to print degree "o" for degrees fareinheight or celsius etc.
            //need to figure out if the motor temperature is in celsius or fareinheight, prob celsius
        }
        else { // PRINT CAN ADDRESS AND PAYLOAD -----------------
            SERIAL.println("-----------------------------");
            SERIAL.println("INVALID OR UNACCOUNTED FOR CAN ADDRESS!");
            SERIAL.print("Getting data from ID: 0x");
            SERIAL.print("");
            SERIAL.println(canId, DEC);
            for (int i = 0; i < len; i++) { // print the data
                SERIAL.print(buf[i]);
                SERIAL.print("\t");
                if (ledON && i == 0) {

                    digitalWrite(LED, buf[i]);
                    ledON = 0;
                    delay(500);
                } else if ((!(ledON)) && i == 4) {

                    digitalWrite(LED, buf[i]);
                    ledON = 1;
                }   
        }
        SERIAL.println();
        }
        
    }
}

//END FILE
