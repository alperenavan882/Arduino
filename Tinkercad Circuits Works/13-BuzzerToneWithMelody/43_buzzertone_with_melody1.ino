// C++ code
//
void setup()
{
  pinMode(3, OUTPUT);
}

void loop() {
  int noteDuration;
  
  // İlk ölçü
  noteDuration = 600;
  tone(3, 392, noteDuration); // G4
  delay(noteDuration);
  
  noteDuration = 400;
  tone(3, 440, noteDuration); // A4
  delay(noteDuration);
  
  noteDuration = 800;
  tone(3, 392, noteDuration); // G4
  delay(noteDuration);

  noteDuration = 600;
  tone(3, 349, noteDuration); // F4
  delay(noteDuration);

  noteDuration = 600;
  tone(3, 392, noteDuration); // G4
  delay(noteDuration);

  noteDuration = 1200;
  tone(3, 294, noteDuration); // D4
  delay(noteDuration);

  // İkinci ölçü
  noteDuration = 600;
  tone(3, 294, noteDuration); // D4
  delay(noteDuration);

  noteDuration = 400;
  tone(3, 330, noteDuration); // E4
  delay(noteDuration);

  noteDuration = 800;
  tone(3, 349, noteDuration); // F4
  delay(noteDuration);

  noteDuration = 600;
  tone(3, 392, noteDuration); // G4
  delay(noteDuration);

  noteDuration = 400;
  tone(3, 440, noteDuration); // A4
  delay(noteDuration);

  noteDuration = 800;
  tone(3, 294, noteDuration); // D4
  delay(noteDuration);

  // Melodiyi durdur
  noTone(3);

  // Döngünün başına dönmeden önce biraz bekle
  delay(2000);
}