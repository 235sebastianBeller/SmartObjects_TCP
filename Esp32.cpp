#include"Esp32.h"
Esp32::Esp32(){
}
void Esp32::initializeLeds(){
    for(int i=0;i<LEDS_COUNT;i++)
      leds[i] = Led(ledPins[i]);
}
void Esp32::turnOnTheLeds(int limit){
  for(int i=0;i<LEDS_COUNT;i++){
    if(i<limit) 
      leds[i].turnOn();
    else 
      leds[i].turnOff();
    delay(25);
  }
}
Esp32::~Esp32(){
}