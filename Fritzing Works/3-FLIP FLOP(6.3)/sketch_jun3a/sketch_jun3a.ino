void setup() {
  // put your setup code here, to run once:

  pinMode(10,OUTPUT);
  pinMode(9,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(10,HIGH);
  digitalWrite(9,LOW);
  delay(100);
  digitalWrite(10,LOW);
  digitalWrite(9,HIGH);
  delay(100);
}
