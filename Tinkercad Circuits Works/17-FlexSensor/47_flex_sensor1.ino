// C++ code
//
void setup()
{
  pinMode(9,OUTPUT);
  pinMode(10,OUTPUT);
  pinMode(11,OUTPUT);
  pinMode(A0,INPUT);
  
  Serial.begin(9600);
}

void loop()
{
  int sensorValue = analogRead(A0);
  
  Serial.println(sensorValue);
  
  if(sensorValue > 900)
  {
    digitalWrite(9,HIGH);
    digitalWrite(10,LOW);
    digitalWrite(11,LOW);
  }
  else if (sensorValue > 840 && sensorValue < 900)
  {
    digitalWrite(9,LOW);
    digitalWrite(10,HIGH);
    digitalWrite(11,LOW);
  } 
  else if(sensorValue > 700 && sensorValue < 840)
  {
    digitalWrite(9,LOW);
    digitalWrite(10,LOW);
    digitalWrite(11,HIGH);
  }
}