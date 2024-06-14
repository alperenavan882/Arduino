// C++ code
//



void setup()
{
  pinMode(7,INPUT);
  pinMode(6,INPUT);
  pinMode(5,INPUT);
 
  pinMode(11,OUTPUT);
  pinMode(10,OUTPUT);
  pinMode(9,OUTPUT);
}

void loop()
{
  delay(10); // Delay a little bit to improve simulation performance
  
  if(digitalRead(7)==1)
  {
   digitalWrite(11,HIGH); 
  }
  else
  {
   digitalWrite(11,LOW); 
  }
  
  if(digitalRead(6)==1)
  {
   digitalWrite(10,HIGH); 
  }
  else
  {
   digitalWrite(10,LOW); 
  }
  
  if(digitalRead(5)==1)
  {
   digitalWrite(9,HIGH); 
  }
  else
  {
   digitalWrite(9,LOW); 
  }
  
  
}