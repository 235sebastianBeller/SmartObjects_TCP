#ifndef ESP32_H
#define ESP32_H
#include "constants.h"
#include "Led.h"
class Esp32{
  private:
    Led leds[LEDS_COUNT];
  public:
    Esp32();
    void initializeLeds();
    void turnOnTheLeds(int limit);
    ~Esp32();

};
#endif