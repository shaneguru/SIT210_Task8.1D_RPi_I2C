
#include <Wire.h>
 
const int ledPin = 13; 
 
void setup() {
  Wire.begin(0x8);
  Wire.onReceive(receiveEvent);
  
  pinMode(ledPin, OUTPUT);
  digitalWrite(ledPin, LOW);
}
 
void receiveEvent(int howMany) {
  while (Wire.available()) {
    char c = Wire.read(); 
    digitalWrite(ledPin, c);
  }
}
void loop() {
  delay(100);
}


/*
  Got help from,
   DroneBot Workshop 2019
  https://dronebotworkshop.com
*/
 
