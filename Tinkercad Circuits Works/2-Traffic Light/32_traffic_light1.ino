// C++ code
//

const int carGreenLight = 11;
const int carYellowLight = 10;
const int carRedLight = 9;

const int pedestrianGreenLight=13;
const int pedestrianRedLight=12;

void setup()
{
  pinMode(carGreenLight,OUTPUT);
  pinMode(carYellowLight,OUTPUT);
  pinMode(carRedLight,OUTPUT);
}

void loop()
{
  
  //Car Red Light-Pedestrian Green Light open-close and timing
  digitalWrite(carRedLight,HIGH);
  digitalWrite(pedestrianGreenLight,HIGH);
  delay(8000);
  digitalWrite(carRedLight,LOW);
  digitalWrite(pedestrianGreenLight,LOW);
  
  //Car Yellow Light-Pedestrian Red Light Warning open-close and timing
  digitalWrite(carYellowLight,HIGH);
  digitalWrite(pedestrianRedLight,HIGH);
  delay(2000);
  digitalWrite(pedestrianRedLight,LOW);
  delay(1000);
  digitalWrite(pedestrianRedLight,HIGH);
  delay(2000);
  digitalWrite(carYellowLight,LOW);
  
  //Car Green Light-Pedestrian Red Light open-close and timing
  digitalWrite(carGreenLight,HIGH);
  delay(6000);
  digitalWrite(carGreenLight,LOW);
  digitalWrite(pedestrianRedLight,LOW);
  
  //Returning Back
  digitalWrite(carYellowLight,HIGH);
  delay(4000);
  digitalWrite(carYellowLight,LOW);
  
  
  
}