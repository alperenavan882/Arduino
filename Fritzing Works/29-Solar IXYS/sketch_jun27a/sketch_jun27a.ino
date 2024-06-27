
int sensorPin = 0;
int value = 0;
float voltage = 0;

void setup() {
  
  pinMode(A0,INPUT);
  Serial.begin(9600);

}

void loop() {
  
  value = analogRead(sensorPin);
  voltage = (value / 1024.0) * 5000;
  Serial.print(voltage);
  Serial.println("\t Milivolt");

}
