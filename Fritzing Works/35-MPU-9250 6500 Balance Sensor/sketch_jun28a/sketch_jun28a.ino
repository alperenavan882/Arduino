

//Sensor Library
#include <MPU6050.h>

//To use I2C Communication 
#include <Wire.h>

MPU6050 sensor;

int acX,acY,acZ;

int gyroX,gyroY,gyroZ;

void setup() {
  
  Serial.begin(9600);
  Wire.begin();
  sensor.initialize();

}

void loop() {
  
  sensor.getAcceleration(&acX,&acY,&acZ);
  sensor.getRotation(&gyroX,&gyroY,&gyroZ);

  //To take the same 6 value at the same time 
  //sensor.getMotion6(&accX,&accY,&accZ,&gyroX,&gyroY,&gyroZ);

  Serial.print("Acceleration X = ");
  Serial.println(acX);

  Serial.print("Acceleration Y = ");
  Serial.println(acY);

  Serial.print("Acceleration Z = ");
  Serial.println(acZ);

  Serial.print("Gyro X = ");
  Serial.println(gyroX);

  Serial.print("Gyro Y = ");
  Serial.println(gyroY);

  Serial.print("Gyro Z = ");
  Serial.println(gyroZ);
}
