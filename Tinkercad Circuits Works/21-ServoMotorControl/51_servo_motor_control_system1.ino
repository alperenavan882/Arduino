// C++ code
//
#include <Servo.h>

int count = 0;

Servo servo_3;

int counter;

void setup()
{
  servo_3.attach(3,500,2500);
}

void loop()
{
  count = 0;
  for(counter = 0;counter < 12;++counter)
  {
    servo_3.write(count);
    count += 15;
    delay(500);
  }
}