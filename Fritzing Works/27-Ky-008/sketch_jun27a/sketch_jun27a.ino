
int laserPin = 7;

void setup() {

  pinMode(laserPin,OUTPUT);

}

void loop() {

  digitalWrite(laserPin,HIGH);
  delay(1000);
  digitalWrite(laserPin,LOW);
  delay(1000);

}
