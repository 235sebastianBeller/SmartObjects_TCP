#include"Led.h"
Led::Led(int ledPin){
  this->ledPin=ledPin;
  pinMode(ledPin, OUTPUT);
}
Led::Led(){
}
void Led::turnOn(){
    digitalWrite(ledPin,HIGH);
}
void Led::turnOff(){
    digitalWrite(ledPin,LOW);
}
Led::~Led(){
}