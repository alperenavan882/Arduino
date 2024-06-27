
int laserPin = 7;
int sensorPin = A0;
int value = 0;

void setup() {

  pinMode(laserPin,OUTPUT);
  Serial.begin(9600);

}

void loop() {

  value = analogRead(sensorPin);

  //To test the value range
  /*
  Serial.println(value);
  */

  if(value < 950)
  {
    Serial.println("There is obstacle.");
  }
  else
  {
    Serial.println("There is no obstacle.");
  }
}
