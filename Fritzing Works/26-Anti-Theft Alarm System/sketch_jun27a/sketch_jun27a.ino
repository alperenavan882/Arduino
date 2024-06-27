
int sensorPin = 9;
int ledPin = 8;
int buzzerPin = 7;

void setup() {
  
  Serial.begin(9600);

  pinMode(sensorPin,INPUT);
  pinMode(ledPin,OUTPUT);
  pinMode(buzzerPin,OUTPUT);

}

void loop() {
  
  pinMode(sensorPin,INPUT);

  int value = digitalRead(sensorPin);

  if(value == HIGH)
  {
    digitalWrite(ledPin,HIGH);
    digitalWrite(buzzerPin,HIGH);
    delay(200);
    digitalWrite(ledPin,LOW);
    digitalWrite(buzzerPin,LOW);
    delay(200);
  }
  else
  {
    digitalWrite(ledPin,LOW);
    digitalWrite(buzzerPin,LOW);
  }

}

