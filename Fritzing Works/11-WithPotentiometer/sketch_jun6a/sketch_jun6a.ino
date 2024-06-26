
const int analogInput=A0;

void setup() {

pinMode(analogInput,INPUT);
Serial.begin(9600);

}

void loop() {

int value=analogRead(analogInput);
Serial.println(value);
delay(1000);

}

