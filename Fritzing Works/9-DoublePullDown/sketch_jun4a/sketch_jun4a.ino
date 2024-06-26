
const int ledPin=9;
const int buttonPin=10;
const int buttonPin2=11;

void setup() {
  // put your setup code here, to run once:

  pinMode(buttonPin,INPUT);
  pinMode(ledPin,OUTPUT);
  pinMode(buttonPin2,INPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  int value = digitalRead(buttonPin);
  int value2 = digitalRead(buttonPin2);
  if (value==HIGH)
  {
    digita1Write (ledPin,HIGH);
  }
  else if(value2 == HIGH)
  {
    digita1Write (ledPin,LOW);
  }
}
