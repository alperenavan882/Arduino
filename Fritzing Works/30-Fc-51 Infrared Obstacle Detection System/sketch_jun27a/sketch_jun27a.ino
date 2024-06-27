
int sensorPin = 10;
int value = 0;

void setup() {
  
  pinMode(sensorPin,INPUT);

  Serial.begin(9600);

}

void loop() {
 
  value = digitalRead(sensorPin);

  Serial.println(value);
  delay(200); 

  //When there is an obstacle it will give 0 output
  //Normally it will give 0 output

}
