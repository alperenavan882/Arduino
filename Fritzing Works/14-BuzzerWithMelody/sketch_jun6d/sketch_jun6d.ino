
/*
do 261  re 294  mi 329  fa 349
sol 392 la 440  si 493  DOO 523
*/

#define do_ 261
#define re 294
#define mi 329
#define fa 349
#define sol 392
#define la 440
#define si 493
#define DOO 523

#define buzzerPin 11

int musicalNote [] = {do_,re,mi,fa,sol,la,si,DOO};

void setup() {
  // put your setup code here, to run once:

  pinMode(buzzerPin,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  for(int i=0;i<8;i++)
  {
    tone(buzzerPin,musicalNote[i]);
    delay(1000);
  }
  
  
}
