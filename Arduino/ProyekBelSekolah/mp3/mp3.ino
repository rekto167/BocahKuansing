#include <DFPlayer_Mini_Mp3.h>

#include <SoftwareSerial.h>
#include <DFMiniMp3.h>


SoftwareSerial mySerial(10, 11);
int play_cok;
void setup () {
Serial.begin (9600);
mySerial.begin (9600);
mp3_set_serial (mySerial);
delay(10);
mp3_set_volume (25);
//delay(10);
//mp3_play ();
//delay(10);
//mp3_play (1);
//delay(10);
}
 
void loop () {
  play_cok=digitalRead(7);
  if(play_cok==LOW){
    mp3_play();
    delay(10);
  }
}
