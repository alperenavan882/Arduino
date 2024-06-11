// C++ code
//

const int greenLight = 11;
const int yellowLight = 10;
const int redLight = 9;

const int time=250;

void setup()
{
  pinMode(redLight,OUTPUT);
  pinMode(yellowLight,OUTPUT);
  pinMode(greenLight,OUTPUT);
}

void loop()
{
  digitalWrite(redLight,HIGH);
  delay(time);
  digitalWrite(redLight,LOW);
  
  digitalWrite(yellowLight,HIGH);
  delay(time);
  digitalWrite(yellowLight,LOW);
  
  digitalWrite(greenLight,HIGH);
  delay(time);
  digitalWrite(greenLight,LOW);
  
  digitalWrite(yellowLight,HIGH);
  delay(time);
  digitalWrite(yellowLight,LOW);

}