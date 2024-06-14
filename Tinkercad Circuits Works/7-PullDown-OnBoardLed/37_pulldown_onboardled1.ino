// C++ code
//
void setup()
{
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(2,INPUT);
  pinMode(3,OUTPUT);
  
  Serial.begin(9600);
}

void loop()
{
  
  if(digitalRead(2)==1)
  {
   	digitalWrite(3,HIGH); 
  }
  else
  {
   	digitalWrite(3,LOW); 
  }
}