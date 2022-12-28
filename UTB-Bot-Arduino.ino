//#include <SoftwareSerial.h>
//SoftwareSerial espSerial(5, 6);
//String str;
//void setup(){
//Serial.begin(115200);
//espSerial.begin(115200);
//delay(2000);
//}
//void loop()
//{
//str =String("coming from arduino: ")+String("HI");
//espSerial.println(str);
//delay(1000);
//}

//#include <SoftwareSerial.h>
//
//void setup() {
//// Open serial communications and wait for port to open:
//Serial.begin(115200);
//while (!Serial) {
//; // wait for serial port to connect. Needed for native USB port only
//}
//}
//void loop() { // run over and over
////Serial.write(Serial.read());
//if (Serial.available() > 0) {
//Serial.write(Serial.read());
//}
//}


#include <SoftwareSerial.h>

//Started SoftwareSerial at new RX (5) and new TX (6) pin of ESP8266/NodeMCU
SoftwareSerial newSerial (5,6);

int data; //Initialized variable to store recieved data

void setup() {
  //Serial Begin at 9600 Baud 
  Serial.begin(115200);
  newSerial.begin(115200);
}

void loop() {
  if (newSerial.available() > 0) {
    data = newSerial.read(); //Read the serial data and store it
    Serial.println(data);
//    delay(1000);
  }
//  newSerial.write(123);
//  delay(1000);
}
