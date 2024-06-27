
int sensorPin = 8;
int ledPin = 9;

//bool ledStatus = false;

void setup() {
  
  pinMode(sensorPin,INPUT);
  pinMode(ledPin,OUTPUT);

}

void loop() {
  
  int sensorStatus = digitalRead(sensorPin);

  if(sensorStatus == 0)
  {
    
    digitalWrite(ledPin,HIGH);

    delay(1000);

  }else if(sensorStatus == 1)
  {

    digitalWrite(ledPin,LOW);
    
  }
  
}

