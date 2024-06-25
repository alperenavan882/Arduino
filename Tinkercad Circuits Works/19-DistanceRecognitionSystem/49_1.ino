// C++ code
//
long readUltrasonicDistance(int triggerPin, int echoPin)
{
  pinMode(triggerPin, OUTPUT);  // Clear the trigger
  digitalWrite(triggerPin, LOW);
  delayMicroseconds(2);
  // Sets the trigger pin to HIGH state for 10 microseconds
  digitalWrite(triggerPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(triggerPin, LOW);
  pinMode(echoPin, INPUT);
  // Reads the echo pin, and returns the sound wave travel time in microseconds
  return pulseIn(echoPin, HIGH);
}

void setup()
{
  Serial.begin(9600);
  pinMode(13, OUTPUT);
}

void loop()
{
  Serial.println(0.01723 * readUltrasonicDistance(4, 3));
  while (150 > 0.01723 * readUltrasonicDistance(4, 3)) {
    tone(13, 523, 100); // play tone 60 (C5 = 523 Hz)
    delay(1000 * (3 * 0.01723 * readUltrasonicDistance(4, 3))); // Wait for 1000 * (3 * 0.01723 * readUltrasonicDistance(4, 3)) millisecond(s)
    Serial.println(0.01723 * readUltrasonicDistance(4, 3));
  }
}