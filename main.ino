#include "Esp32.h"
#include "UltrasonicSensor.h"
#include<Arduino.h>
const int TRIGGER_PIN=12;
const int ECHO_PIN=13;
const int LEDS_COUNT=6;
const int TRANSMISSION_SPEED=9600;
const int INTERVAL=7;
const int SAMPLE_SIZE=1;
const int ledPins[LEDS_COUNT] = {15,2,4,5,18,19};
Esp32 esp;
UltrasonicSensor ultrasonicSensor(TRIGGER_PIN,ECHO_PIN);
void setup()
{ 
  esp.initializeLeds();
  Serial.begin(TRANSMISSION_SPEED);
}

void loop()
{
  int cm=ultrasonicSensor.getTheShortestDistance(SAMPLE_SIZE);
  //Serial.println(cm);
  int countLedsOn=min(cm/INTERVAL,6);
  Serial.println(countLedsOn);
  esp.turnOnTheLeds(countLedsOn);
}