// C++ code
//
void setup()
{
  pinMode(A1, INPUT);
  pinMode(4,OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  int sensorValue = analogRead(A1);
  
  if(sensorValue > 500)
  {
    digitalWrite(4,HIGH);
  }
  else
  {
    digitalWrite(4,LOW);
  }
}