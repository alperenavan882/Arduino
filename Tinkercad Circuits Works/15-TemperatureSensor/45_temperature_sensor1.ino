// C++ code
//
void setup()
{
  pinMode(A0, INPUT);
  pinMode(2,OUTPUT);
  pinMode(3,OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  float sensorValue = (-40 + 0.488155 * (analogRead(A0) - 20));
  Serial.println(sensorValue);
  delay(50); // Wait for 50 millisecond(s)
  
  if(sensorValue >= 35)
  {
   	digitalWrite(2,HIGH);
    tone(3,523,100);
  }
  digitalWrite(2,LOW);
  
  
}
  