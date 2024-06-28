
//Library for sensor
#include <HCSR04.h>

//Initialization hc(trig pin,echo pin)
HCSR04 hc(5,6); 

int sensorValue = 0;

void setup() {
  
  Serial.begin(9600);

}

void loop() {
  
  //Reads the value
  sensorValue = hc.dist();

  //Return current distance in serial
  Serial.println(sensorValue);

  delay(400);

}
