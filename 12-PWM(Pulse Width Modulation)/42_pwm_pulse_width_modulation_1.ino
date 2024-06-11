// C++ code
//
int ledValue = 0;

int potValue = 0;

void setup()
{
  pinMode(11,OUTPUT);
  pinMode(A0,INPUT);
  Serial.begin(9600);
}

void loop()
{
  delay(10); // Delay a little bit to improve simulation performance
  
  potValue=analogRead(A0);
  
  Serial.println(potValue);
  
  ledValue = map(potValue, 0, 1023, 0, 255);
  
  analogWrite(11, ledValue);
}