// C++ code
//

int sensorValue;

void setup()
{
  pinMode(11,OUTPUT);
  pinMode(10,OUTPUT);
  pinMode(9,OUTPUT);
  pinMode(A0,INPUT);
  Serial.begin(9600);
}

void loop()
{
  delay(10); // Delay a little bit to improve simulation performance 
	
  sensorValue=analogRead(A0);
  
  Serial.println(sensorValue);
  
  if(sensorValue<400)
  {
    digitalWrite(10,LOW);
    digitalWrite(11,LOW);
    digitalWrite(9,HIGH);
  }
  else if(sensorValue > 400 && sensorValue < 800)
  {
    digitalWrite(9, LOW);
    digitalWrite(11, LOW);
    digitalWrite(10, HIGH);
  }
  else if(sensorValue > 800 && sensorValue < 1024)
  {
    digitalWrite(9, LOW);
    digitalWrite(10, LOW);
    digitalWrite(11, HIGH);
  }
  
  
}