#ifndef LED_H
#define LED_H
#include<Arduino.h>
class Led {
  private:
    int ledPin;
  public:
  Led();
  Led(int ledPin);
  void turnOn();
  void turnOff();
  ~Led();
};
#endif