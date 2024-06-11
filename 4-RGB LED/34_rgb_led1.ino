// C++ code
//

const int redLight = 9;
const int blueLight = 10;
const int greenLight = 11;

void setup()
{
  pinMode(redLight,OUTPUT);
  pinMode(blueLight,OUTPUT);
  pinMode(greenLight,OUTPUT);
}

void loop()
{
  digitalWrite(redLight,HIGH);
  delay(1000);
  digitalWrite(redLight,LOW);
  
  digitalWrite(blueLight,HIGH);
  delay(1000);
  digitalWrite(blueLight,LOW);
  
  digitalWrite(greenLight,HIGH);
  delay(1000);
  digitalWrite(greenLight,LOW);
  
  digitalWrite(redLight,HIGH);
  digitalWrite(blueLight,HIGH);
  delay(1000);
  digitalWrite(redLight,LOW);
  digitalWrite(blueLight,LOW);
  
  digitalWrite(redLight,HIGH);
  digitalWrite(greenLight,HIGH);
  delay(1000);
  digitalWrite(redLight,LOW);
  digitalWrite(greenLight,LOW);
  
  digitalWrite(greenLight,HIGH);
  digitalWrite(blueLight,HIGH);
  delay(1000);
  digitalWrite(greenLight,LOW);
  digitalWrite(blueLight,LOW);
  
  digitalWrite(redLight,HIGH);
  digitalWrite(blueLight,HIGH);
  digitalWrite(greenLight,HIGH);
  delay(1000);
  digitalWrite(redLight,LOW);
  digitalWrite(blueLight,LOW);
  digitalWrite(greenLight,LOW);
  
  analogWrite(redLight, 255);
  analogWrite(greenLight, 255);
  analogWrite(blueLight, 0);
  delay(1000);
  
  analogWrite(redLight, 0);
  analogWrite(greenLight, 0);
  analogWrite(blueLight, 0);
  delay(1000);

  
}