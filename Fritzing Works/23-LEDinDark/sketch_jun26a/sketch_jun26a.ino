const int ledPin = 2;
const int LDRpin = A0;

void setup() {
  // put your setup code here, to run once:

  Serial.begin(9600);
  
  pinMode(ledPin,OUTPUT);
  pinMode(LDRpin,INPUT);

}

void loop() {
  // put your main code here, to run repeatedly:

  int LDRValue analogRead(LDRpin); 
  Serial.print("Light Intensity : ");
  Serial.println(LDRValue);

  if(value < 900)
  {
    digitalWrite(ledPin,HIGH);
  }
  else
  {
    digitalWrite(ledPin,LOW);
  }



}