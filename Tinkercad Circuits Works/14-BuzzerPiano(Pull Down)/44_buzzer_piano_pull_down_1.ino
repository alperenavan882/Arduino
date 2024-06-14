// Güncellenmiş Hertz Notation 
/*
do 261.63
re 293.66 	
mi 329.63
fa 349.23
sol 392.00
la 440.00
si 493.88 
Do 523.25
*/

const int do_  = 262; // 261.63
const int re  = 294; // 293.66
const int mi  = 330; // 329.63
const int fa  = 349; // 349.23
const int sol = 392; // 392.00
const int la  = 440; // 440.00
const int si  = 494; // 493.88
const int Do  = 523; // 523.25

void setup()
{
  pinMode(13,OUTPUT);
  
  pinMode(9,INPUT);
  pinMode(8,INPUT);
  pinMode(7,INPUT);
  pinMode(6,INPUT);
  pinMode(5,INPUT);
  pinMode(4,INPUT);
  pinMode(3,INPUT);
  pinMode(2,INPUT);
}

void loop()
{
 if(digitalRead(9) == 1)
 {
   tone(13,do_,10);
 }
  if(digitalRead(8) == 1)
 {
   tone(13,re,10);
 }
  if(digitalRead(7) == 1)
 {
   tone(13,mi,10);
 }
  if(digitalRead(6) == 1)
 {
   tone(13,fa,10);
 }
  if(digitalRead(5) == 1)
 {
   tone(13,sol,10);
 }
  if(digitalRead(4) == 1)
 {
   tone(13,la,10);
 }
  if(digitalRead(3) == 1)
 {
   tone(13,si,10);
 }
  if(digitalRead(2) == 1)
 {
   tone(13,Do,10);
 }
}
