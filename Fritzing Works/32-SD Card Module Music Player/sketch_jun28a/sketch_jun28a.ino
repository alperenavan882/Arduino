
//Library for SD Card Module
#include <SimpleSDAudio.h> 

void setup() {
  
  // Enable if your SD card CS-Pin is not at Pin 4
  /* SdPlay.setSDCSPin(10); */
  
  
  SdPlay.init(SSDA_MODE_FULLRATE | SSDA_MODE_MONO | SSDA_MODE_AUTOWORKER);
  
  //Choosen file before it is converted to wav
  SdPlay.setFile("A.WAV");
  
  SdPlay.play(); 

}

void loop() {
  


}
