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
#include <HCSR04.h>


HCSR04 centerSonic(7, 8); //initialisation class HCSR04 (trig pin , echo pin)
HCSR04 leftSonic(9, 10); //initialisation class HCSR04 (trig pin , echo pin)
HCSR04 rightSonic(11, 12); //initialisation class HCSR04 (trig pin , echo pin)
HCSR04 backSonic(2, 3); //initialisation class HCSR04 (trig pin , echo pin)

//Started SoftwareSerial at new RX (5) and new TX (6) pin of ESP8266/NodeMCU
SoftwareSerial newSerial(5,6);
//SoftwareSerial newSerial_2(10,16);

int data; //Initialized variable to store recieved data

void setup() {
  //Serial Begin at 9600 Baud 
  Serial.begin(115200);
  newSerial.begin(115200);
//  newSerial_2.begin(115200);
}

void loop() {

//    Serial.println(centerSonic.dist());
//     delay(500);
//     Serial.println(leftSonic.dist());
//     delay(500);
//     Serial.println(rightSonic.dist());
//     delay(500);
//     Serial.println(backSonic.dist());
//     delay(500);
//    Serial.println(leftSonic.dist());
//     delay(80);
//    Serial.println(rightSonic.dist());
//     delay(80);
//    Serial.println(backSonic.dist());
//    delay(80);
    
    if (centerSonic.dist() < 40 || leftSonic.dist() < 20 || rightSonic.dist() < 20){
      newSerial.write(1);
      Serial.println(1);
    }
    delay(80);
    if (backSonic.dist() < 40){
      newSerial.write(2);
      Serial.println(2);
    }
    delay(80);
            
//    Serial.write(1);
//    delay(1000);
//
//    Serial.println(testSonic.dist());
//    newSerial_2.write(testSonic.dist());
//    delay(80);
    
  
//  Serial.write(100);
//  delay(10000);
//  if (newSerial.available() > 0) {
//    Serial.println(newSerial.available());
//    data = newSerial.read(); //Read the serial data and store it
//    Serial.println(data);
//    delay(1000);
//  }
//  newSerial.write(123);
//  delay(1000);
}
