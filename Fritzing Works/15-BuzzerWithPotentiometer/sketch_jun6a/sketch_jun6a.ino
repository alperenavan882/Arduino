
const int buzzerPin=11;
const int ledPin=9;
const int potPin=A0;

void setup() {
  // put your setup code here, to run once:

  pinMode(ledPin,OUTPUT);
  pinMode(buzzerPin,OUTPUT);
  pinMode(potPin,INPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  
  int value = analogRead(potPin);
  digitalWrite(buzzerPin,HIGH);
  digitalWrite(ledPin,HIGH);
  delay(value);
  digitalWrite(buzzerPin,LOW);
  digitalWrite(ledPin,LOW);
  delay(value);

}
