
const int analogInput=A0;
const int ledPin=9;

void setup() {

pinMode(analogInput,INPUT);
Serial.begin(9600);
pinMode(ledPin,OUTPUT);

}

void loop() {

int value=analogRead(analogInput);
Serial.println(value);
delay(100);

int ledValue=map(value,0,1023,0,255);
analogWrite(ledPin,ledValue);
}