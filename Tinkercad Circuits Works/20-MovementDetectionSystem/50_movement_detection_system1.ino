// C++ code
//
void setup()
{
  
  pinMode(3,INPUT);
  pinMode(12,OUTPUT);
  pinMode(13,OUTPUT);
  pinMode(11,OUTPUT);
  Serial.begin(9600);
  
}

void loop()
{
  
  int sensorValue = digitalRead(3);
  Serial.println(sensorValue);
  
  if(sensorValue != 1)
  {
    digitalWrite(13,HIGH);
    digitalWrite(12,LOW);
  }
  else if(sensorValue == 1)
  {
   	digitalWrite(13,LOW);
    digitalWrite(12,HIGH);
    
    while(sensorValue == 1)
    {
      tone(11,523,100);
      delay(500);
      noTone(11);
      
      sensorValue = digitalRead(3);
    }
  }
  
}