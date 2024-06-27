
int sensorPin = 9;

void setup() {
  
  Serial.begin(9600);

  pinMode(sensorPin,INPUT);

}

void loop() {
  
  pinMode(sensorPin,INPUT);

  int value = digitalRead(sensorPin);

  if(value == HIGH)
  {
    Serial.println("There is movement.");
    delay(500);
  }
  else
  {
    Serial.println("There is NO movement.");
    delay(500);
  }

}
