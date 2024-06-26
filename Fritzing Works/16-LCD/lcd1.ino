// C++ code
//

//This activates I2C libraries
#include <Wire.h>    			

//This includes the LCD libraries
#include <LiquidCrystal_I2C.h>	

LiquidCrystal_I2C screen(0x27,16,2);

void setup()
{
  screen.init();
  screen.backlight();
  screen.setCursor(2,0);
  screen.print("Alperen Avan");
  screen.setCursor(3,1);
  screen.print("Intern");
}

void loop()
{
  
}