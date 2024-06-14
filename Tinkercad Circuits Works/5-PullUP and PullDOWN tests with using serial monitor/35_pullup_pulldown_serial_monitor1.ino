// C++ code
//
void setup()
{
  pinMode(2,INPUT);
  pinMode(3,INPUT);
  Serial.begin(9600);
}

void loop()
{
  Serial.print("PULL UP : ");
  Serial.print(digitalRead(2));
  Serial.print("			");
  Serial.print("PULL DOWN : ");
  Serial.print(digitalRead(3));
  Serial.print("\n");
}