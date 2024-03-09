#include "UltrasonicSensor.h"
#include<Arduino.h>
const int triggerPin=4;
const int echoPin=2;
void setup()
{
  Serial.begin(9600);
}

void loop()
{
  UltrasonicSensor ultrasonicSensor(triggerPin,echoPin);
  int cm=ultrasonicSensor.getTheShortestDistance(10);
    Serial.print(cm);
    Serial.println("cm");
}