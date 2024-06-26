
#include <Wire.h>
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C screen(0x27,16,2);

void setup() {

  pinMode(A0,INPUT);

  screen.init();
  screen.backlight();
}

void loop() {

  int analogValue = analogRead(A0);
  int value = map(analogValue,0,1023,0,4);

  switch(value)
  {
    case 0:
    screen.clear();
    screen.setCursor(3,0);
    screen.print("Hello");
    screen.setCursor(3,1);
    screen.print("World!");
    delay(100);
    break;

    case 1:
    screen.clear();
    screen.setCursor(3,0);
    screen.print("My");
    screen.setCursor(3,1);
    screen.print("Full");
    delay(100);
    break;

    case 2:
    screen.clear();
    screen.setCursor(3,0);
    screen.print("Name");
    screen.setCursor(3,1);
    screen.print("Is");
    delay(100);
    break;

    case 3:
    screen.clear();
    screen.setCursor(3,0);
    screen.print("Alperen");
    screen.setCursor(3,1);
    screen.print("Avan");
    delay(100);
    break;

    case 4:
    screen.clear();
    screen.setCursor(3,0);
    screen.print("Thank");
    screen.setCursor(3,1);
    screen.print("You!");
    delay(100);
    break;
  }

}
