
const int vehicleRed=10;
const int vehicleYellow=9;
const int vehicleGreen=8;


void setup() {
  // put your setup code here, to run once:

  pinMode(vehicleRed,OUTPUT);
  pinMode(vehicleYellow,OUTPUT);
  pinMode(vehicleGreen,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

  digitalWrite(vehicleRed,HIGH);
  delay(3000);
  digitalWrite(vehicleRed,LOW);

  digitalWrite(vehicleYellow,HIGH);
  delay(3000);
  digitalWrite(vehicleYellow,LOW);

  digitalWrite(vehicleGreen,HIGH);
  delay(3000);
  digitalWrite(vehicleGreen,LOW);
  
}
