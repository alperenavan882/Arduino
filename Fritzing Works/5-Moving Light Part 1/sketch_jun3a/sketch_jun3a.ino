
const int time=100;

void setup() {
  // put your setup code here, to run once:

  for(int ledPin=9;ledPin<12;ledPin++)
  {
    pinMode(ledPin,OUTPUT);
  }
}

void loop() {
  // put your main code here, to run repeatedly:

  for(int ledPin=9;ledPin<12;ledPin++)
  {
    digitalWrite(ledPin,HIGH);
    delay(time);
    digitalWrite(ledPin,LOW);
  }

  for(int ledPin=11;ledPin>8;ledPin--)
  {
    digitalWrite(ledPin,HIGH);
    delay(time);
    digitalWrite(ledPin,LOW);
  }

}
