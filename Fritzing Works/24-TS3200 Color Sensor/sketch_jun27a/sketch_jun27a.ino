
#define s0 8
#define s1 9
#define s2 10
#define s3 11
#define sensorPin 12

int red,green,blue = 0;

void setup() {
  
  pinMode(s0,OUTPUT);
  pinMode(s1,OUTPUT);
  pinMode(s2,OUTPUT);
  pinMode(s3,OUTPUT);

  pinMode(sensorPin,INPUT);

  //Frequency Scaling
  digitalWrite(s0,HIGH); 
  digitalWrite(s1,LOW);

  Serial.begin(9600);

}

void loop() {
  
  //Filter Type : RED
  digitalWrite(s2,LOW);
  digitalWrite(s3,LOW);

  //Read RED color and assign
  red = pulseIn(sensorPin,LOW);

  //Output about red color
  Serial.print("Red : ");
  Serial.print(red);
  Serial.print("\t");
  delay(100);


  //Filter Type : GREEN
  digitalWrite(s2,HIGH);
  digitalWrite(s3,HIGH);

  //Read GREEN color and assign
  green = pulseIn(sensorPin,LOW);

  //Output about greencolor
  Serial.print("Green : ");
  Serial.print(green);
  Serial.print("\t");
  delay(100);


  //Filter Type : BLUE
  digitalWrite(s2,LOW);
  digitalWrite(s3,HIGH);

  //Read BLUE color and assign
  blue = pulseIn(sensorPin,LOW);

  //Output about blue color
  Serial.print("Blue : ");
  Serial.print(blue);
  Serial.println("\t");
  delay(100);

}
