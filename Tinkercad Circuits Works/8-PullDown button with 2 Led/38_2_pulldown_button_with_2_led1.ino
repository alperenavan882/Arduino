// C++ code
//
void setup()
{
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(2,INPUT);
  pinMode(7,INPUT);
  pinMode(3,OUTPUT);
  
  Serial.begin(9600);
}

void loop()
{
  
  if(digitalRead(2)==1)
  {
   	digitalWrite(3,HIGH); 
    delay(1000);
    digitalWrite(3,LOW);
  }
  
  if(digitalRead(7)==1)
  {
   	digitalWrite(8,HIGH); 
    delay(1000);
    digitalWrite(8,LOW);
  }
}