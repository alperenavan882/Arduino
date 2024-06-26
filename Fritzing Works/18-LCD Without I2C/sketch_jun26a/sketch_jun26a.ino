#include <LiquidCrystal.h>
LiquidCrystal lcdScreen(12,11,5,4,3,2);

void setup() {
  // put your setup code here, to run once:

  lcdScreen.begin(16,2);
  lcdScreen.print("Alperen Avan");

}

void loop() {
  // put your main code here, to run repeatedly:

}
