#include "Esp32.h"
#include "UltrasonicSensor.h"
#include<Arduino.h>

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