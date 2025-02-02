/*
  Arduino BMI270 - Simple Gyroscope

  This code measures the tilt direction of the board.

  Material :
  - Arduino Nano 33 BLE Sense Rev2

  created on February 2025
  by Gonzalez Harilanto ANDRINIRINA

*/

#include "Arduino_BMI270_BMM150.h"

float x, y, z;
int plusThreshold = 45; //
int minusThreshold = -45;
/* Setting up boundaries to pinpoint collisions.
PlusThreshold and minusThreshold filter gyroscope readings, ensuring only those above or below ±45 deg/s trigger the collision alert.
*/
void setup() {
  Serial.begin(9600);
  while (!Serial);
  Serial.println("Started");

  if (!IMU.begin()) {
    Serial.println("Failed to initialize IMU!");
    while (1);
  }
  Serial.print("Gyroscope sample rate = ");
  Serial.print(IMU.gyroscopeSampleRate());
  Serial.println(" Hz");
  Serial.println();
  Serial.println("Gyroscope in degrees/second");
}

void loop() {
if (IMU.gyroscopeAvailable())
  {
    IMU.readGyroscope(x, y, z);
    if(y > plusThreshold)
    {
      Serial.println("Collision front");
      delay(500);
    }
    else if(y < minusThreshold)
    {
      Serial.println("Collision back");
      delay(500);
    }
    else if(x < minusThreshold)
    {
      Serial.println("Collision right");
      delay(500);
    }
    else if(x > plusThreshold)
    {
      Serial.println("Collision left");
      delay(500);
    }
  }
}
