#include <Wire.h>
#include <LiquidCrystal_I2C.h>

int buzzer = 11;
int led = 2;

LiquidCrystal_I2C lcdScreen(0x27,16,2);

int sensorPin = A0;
int sensorValue = 0;
float voltage = 0;
float temperature = 0;

void setup() {

  pinMode(sensorPin,INPUT);
  
  lcdScreen.init();
  lcdScreen.backlight();

  pinMode(buzzer,OUTPUT);
  pinMode(led,OUTPUT);
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

  if(temperature > 24)
  {
    digitalWrite(buzzer,HIGH);
    digitalWrite(led,HIGH);
  }else
  {
    digitalWrite(buzzer,LOW);
    digitalWrite(led,LOW);
  }
  delay(100);

}
