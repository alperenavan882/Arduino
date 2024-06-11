// C++ code
//

int sensorValue;

void setup()
{
	pinMode(A0,INPUT);
  	Serial.begin(9600);
}

void loop()
{
  delay(10); // Delay a little bit to improve simulation performance 
	
  
  sensorValue=analogRead(A0);
  
  Serial.println(sensorValue);
}