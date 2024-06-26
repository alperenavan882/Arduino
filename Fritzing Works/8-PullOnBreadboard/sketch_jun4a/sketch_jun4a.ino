//PULL DOWN

/*
const int ledPin=9;
const int buttonPin=10;

void setup() {
  // put your setup code here, to run once:

  pinMode(ledPin,OUTPUT);
  pinMode(buttonPin,INPUT);

}

void loop() {
  // put your main code here, to run repeatedly:

  int value=digitalRead(buttonPin);
  if(value==HIGH)
  {
    digitalWrite(ledPin,HIGH);
  }
  else
  {
    digitalWrite(ledPin,LOW);
  }

}
*/

//PULL UP

const int ledPin=9;
const int buttonPin=10;

void setup() {
  // put your setup code here, to run once:

  pinMode(ledPin,OUTPUT);
  pinMode(buttonPin,INPUT);

}

void loop() {
  // put your main code here, to run repeatedly:

  int value=digitalRead(buttonPin);
  if(value==HIGH)
  {
    digitalWrite(ledPin,LOW);
  }
  else
  {
    digitalWrite(ledPin,HIGH);
  }

}

// Using the resistor inside of the Arduino, again Pull Up

/*
const int ledPin=9;
const int buttonPin=10;

void setup() {
  // put your setup code here, to run once:

  pinMode(ledPin,OUTPUT);
  pinMode(buttonPin,INPUT_PULLUP);

}

void loop() {
  // put your main code here, to run repeatedly:

  int value=digitalRead(buttonPin);
  if(value==HIGH)
  {
    digitalWrite(ledPin,HIGH);
  }
  else
  {
    digitalWrite(ledPin,LOW);
  }

}
*/