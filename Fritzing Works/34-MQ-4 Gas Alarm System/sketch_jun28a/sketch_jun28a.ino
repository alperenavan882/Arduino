
int buzzer = 13;
int red = 11;
int green = 10;
int blue = 9;

int sensorPin = A0;
int sensorValue = 0;

void setup() {

  pinMode(buzzer,OUTPUT);
  
  pinMode(red,OUTPUT); 
  pinMode(green,OUTPUT);
  pinMode(blue,OUTPUT); 

  pinMode(sensorPin,INPUT);

  Serial.begin(9600);

}

void loop() {
  
  sensorValue = analogRead(sensorPin);
  Serial.println(sensorValue);

  if(sensorValue > 750)
  {
    digitalWrite(buzzer,HIGH);

    digitalWrite(red,HIGH);
    digitalWrite(blue,LOW);
    digitalWrite(green,LOW);
  }
  else if(sensorValue > 400)
  {
    digitalWrite(buzzer,LOW);

    digitalWrite(red,LOW);
    digitalWrite(blue,HIGH);
    digitalWrite(green,LOW);
  }
  else if(sensorValue >0)
  {
    digitalWrite(buzzer,LOW);

    digitalWrite(red,LOW);
    digitalWrite(blue,LOW);
    digitalWrite(green,HIGH);
  }

}
