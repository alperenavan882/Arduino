int sensorPin = A0;
int sensorValue = 0;
float voltage = 0;
float temperature = 0;

void setup() {

  Serial.begin(9600);
  pinMode(sensorPin,INPUT);

}

void loop() {

  sensorValue = analogRead(sensorPin);

  voltage = (sensorValue / 1024.0) * 5000.0; 
  temperature = voltage / 10.0;  
  //Every 10mv means 1 temperature increase or decrease so we divided voltage to 10 while calculating

  serial.println(temperature);

}
