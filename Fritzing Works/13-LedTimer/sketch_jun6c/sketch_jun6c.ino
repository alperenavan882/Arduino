
const int analogInput=A0;
const int ledPin=9;

void setup() {

pinMode(analogInput,INPUT);
Serial.begin(9600);
pinMode(ledPin,OUTPUT);

}

void loop() {

int value=analogRead(analogInput);

int ledValue=map(value,0,1023,0,2046);

digitalWrite(ledPin,HIGH);

delay(ledValue);

digitalWrite(ledPin,LOW);

delay(ledValue);



analogWrite(ledPin,ledValue);
}