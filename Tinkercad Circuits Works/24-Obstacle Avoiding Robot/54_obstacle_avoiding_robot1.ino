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
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(0, OUTPUT);
}

void loop()
{
  if (0.01723 * readUltrasonicDistance(8, 9) > 10) {
    digitalWrite(4, HIGH);
    digitalWrite(5, LOW);
    digitalWrite(2, HIGH);
    digitalWrite(3, LOW);
  } else {
    tone(0, 523, 1000); // play tone 60 (C5 = 523 Hz)
    digitalWrite(4, LOW);
    digitalWrite(5, HIGH);
    digitalWrite(2, LOW);
    digitalWrite(3, HIGH);
    delay(500); // Wait for 500 millisecond(s)
    digitalWrite(4, LOW);
    digitalWrite(5, HIGH);
    digitalWrite(2, HIGH);
    digitalWrite(3, LOW);
    delay(500); // Wait for 500 millisecond(s)
  }
}