// C++ code
//
void setup()
{
  
  pinMode(A0,INPUT);
  pinMode(5,INPUT);
  pinMode(11,OUTPUT);
  pinMode(12,OUTPUT);
  pinMode(13,OUTPUT);
  Serial.begin(9600);
  
}

void loop()
{
  
  int seatForce = analogRead(A0);
  
  /* 
  Serial.println(seatForce);
  delay(500);
  */
  
  int belt = digitalRead(5);
  
  /*
  Serial.println(belt);
  delay(500);
  */
  
  if(seatForce > 800 && belt != 1)
  {
    digitalWrite(11,HIGH);
    digitalWrite(12,LOW);
    while(seatForce > 800 && belt != 1)
    {
      tone(13,500,500);
      delay(500);
      noTone(13);
      delay(500);
      
      // Read the values again to update the conditions
      seatForce = analogRead(A0);
      belt = digitalRead(5);
    }
    
    
  }
  else if(seatForce > 800 && belt == 1)
  {
    digitalWrite(11,LOW);
    digitalWrite(12,HIGH);
    digitalWrite(13,LOW);
    noTone(13);
  }
  else if(seatForce < 800)
  {
    digitalWrite(11,LOW);
    digitalWrite(12,LOW);
    digitalWrite(13,LOW);
    noTone(13);
  }
  
  
}