// C++ code
//

const int redLight = 10;
const int blueLight = 11;
const int time = 200;
void setup()
{
  pinMode(redLight,OUTPUT);
  pinMode(blueLight,OUTPUT);
}

void loop()
{
  
  digitalWrite(redLight,HIGH);
  delay(time);
  digitalWrite(redLight,LOW);
  
  digitalWrite(blueLight,HIGH);
  delay(time);
  digitalWrite(blueLight,LOW);
 
}