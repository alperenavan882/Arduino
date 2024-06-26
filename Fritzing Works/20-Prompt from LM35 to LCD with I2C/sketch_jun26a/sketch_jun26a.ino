#include <Wire.h>
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcdScreen(0x27,16,2);

int sensorPin = A0;
int sensorValue = 0;
float voltage = 0;
float temperature = 0;

void setup() {

  pinMode(sensorPin,INPUT);
  
  lcdScreen.init();
  lcdScreen.backlight();
}

void loop() {

  sensorValue = analogRead(sensorPin);

  voltage = (sensorValue / 1024.0) * 5000.0; 
  temperature = voltage / 10.0;  
  //Every 10mv means 1 temperature increase or decrease so we divided voltage to 10 while calculating

  lcdScreen.setCursor(3,0);
  lcdScreen.print("Temperature");
  lcdScreen.setCursor8(3,1);
  lcdScreen.print(temperature);

}
