#include <Wire.h>
#include "RTClib.h"
#include <SoftwareSerial.h>
#include <DFPlayer_Mini_Mp3.h>
#include <DS3232RTC.h>
#include <Streaming.h>

RTC_DS3231 rtc;
SoftwareSerial mySerial(3,2);

void setup() {
  Serial.begin(9600);
  mySerial.begin(9600);
  mp3_set_serial(mySerial);
  delay(10);

  mp3_set_volume(25);
  delay(10);
  
  if (! rtc.begin()) {
    Serial.println("Couldn't find RTC");
    while (1);
  }
 
  if (rtc.lostPower()) {
    Serial.println("RTC lost power, lets set the time!");
    rtc.adjust(DateTime(F(__DATE__), F(__TIME__)));
  }
  DateTime now = rtc.now();
}
void loop() {
  
  DateTime now = rtc.now();
  Serial.print(now.dayOfTheWeek());
  Serial.print(" ");
  Serial.print(now.hour());
  Serial.print(" ");
  Serial.print(now.minute());
  Serial.print(" ");
  Serial.print(now.second());
  Serial.println(" ");
   if(now.dayOfTheWeek()==1){ //senin
    if(now.hour()==7 && now.minute()==15 && now.second()==0){
      upacara();
    }
    else if(now.hour()==8 && now.minute()==5 && now.second()==0){
      jamkedua();
    }
    else if(now.hour()==8 && now.minute()==40 && now.second()==0){
      jamketiga();
    }
    else if(now.hour()==9 && now.minute()==15 && now.second()==0){
      istirahatpertama();
    }
    else if(now.hour()==9 && now.minute()==35 && now.second()==0){
      jamkeempat();
    }
    else if(now.hour()==10 && now.minute()==10 && now.second()==0){
      jamkelima();
    }
    else if(now.hour()==10 && now.minute()==45 && now.second()==0){
      istirahatkedua();
    }
    else if(now.hour()==11 && now.minute()==5 && now.second()==0){
      jamkeenam();
    }    
    else if(now.hour()==11 && now.minute()==40 && now.second()==0){
      jamketujuh();
    }
    else if(now.hour()==12 && now.minute()==15 && now.second()==0){
      akhirpelajaran();
    }
   }
   else if(now.dayOfTheWeek()==2){ //SELASA
    if(now.hour()==7 && now.minute()==15 && now.second()==0){
      berbaris();
    }
    else if(now.hour()==7 && now.minute()==30 && now.second()==0){
      jampertama();
    }
    else if(now.hour()==8 && now.minute()==5 && now.second()==0){
      jamkedua();
    }
    else if(now.hour()==8 && now.minute()==40 && now.second()==0){
      jamketiga();
    }
    else if(now.hour()==9 && now.minute()==15 && now.second()==0){
      istirahatpertama();
    }
    else if(now.hour()==9 && now.minute()==35 && now.second()==0){
      jamkeempat();
    }
    else if(now.hour()==10 && now.minute()==10 && now.second()==0){
      jamkelima();
    }
    else if(now.hour()==10 && now.minute()==45 && now.second()==0){
      istirahatkedua();
    }    
    else if(now.hour()==11 && now.minute()==5 && now.second()==0){
      jamkeenam();
    }
    else if(now.hour()==11 && now.minute()==40 && now.second()==0){
      jamketujuh();
    }
    else if(now.hour()==12 && now.minute()==15 && now.second()==0){
      akhirpelajaran();
    }
   }
   else if(now.dayOfTheWeek()==3){ //RABU
    if(now.hour()==7 && now.minute()==15 && now.second()==0){
      berbaris();
    }
    else if(now.hour()==7 && now.minute()==30 && now.second()==0){
      jampertama();
    }
    else if(now.hour()==8 && now.minute()==5 && now.second()==0){
      jamkedua();
    }
    else if(now.hour()==8 && now.minute()==40 && now.second()==0){
      jamketiga();
    }
    else if(now.hour()==9 && now.minute()==15 && now.second()==0){
      istirahatpertama();
    }
    else if(now.hour()==9 && now.minute()==35 && now.second()==0){
      jamkeempat();
    }
    else if(now.hour()==10 && now.minute()==10 && now.second()==0){
      jamkelima();
    }
    else if(now.hour()==10 && now.minute()==45 && now.second()==0){
      istirahatkedua();
    }    
    else if(now.hour()==11 && now.minute()==5 && now.second()==0){
      jamkeenam();
    }
    else if(now.hour()==11 && now.minute()==40 && now.second()==0){
      jamketujuh();
    }
    else if(now.hour()==12 && now.minute()==15 && now.second()==0){
      akhirpelajaran();
    }
   }
   else if(now.dayOfTheWeek()==4){ //KAMIS
    if(now.hour()==7 && now.minute()==15 && now.second()==0){
      berbaris();
    }
    else if(now.hour()==7 && now.minute()==30 && now.second()==0){
      jampertama();
    }
    else if(now.hour()==8 && now.minute()==5 && now.second()==0){
      jamkedua();
    }
    else if(now.hour()==8 && now.minute()==40 && now.second()==0){
      jamketiga();
    }
    else if(now.hour()==9 && now.minute()==15 && now.second()==0){
      istirahatpertama();
    }
    else if(now.hour()==9 && now.minute()==35 && now.second()==0){
      jamkeempat();
    }
    else if(now.hour()==10 && now.minute()==10 && now.second()==0){
      jamkelima();
    }
    else if(now.hour()==10 && now.minute()==45 && now.second()==0){
      istirahatkedua();
    }    
    else if(now.hour()==11 && now.minute()==5 && now.second()==0){
      jamkeenam();
    }
    else if(now.hour()==11 && now.minute()==40 && now.second()==0){
      jamketujuh();
    }
    else if(now.hour()==12 && now.minute()==15 && now.second()==0){
      akhirpelajaran();
    }
   }
   else if(now.dayOfTheWeek()==5){ //JUMAT
    if(now.hour()==7 && now.minute()==15 && now.second()==0){
      kerohanian();
    }
    else if(now.hour()==8 && now.minute()==5 && now.second()==0){
      jamkedua();
    }
    else if(now.hour()==8 && now.minute()==40 && now.second()==0){
      jamketiga();
    }
    else if(now.hour()==9 && now.minute()==15 && now.second()==0){
      istirahatpertama();
    }
    else if(now.hour()==9 && now.minute()==35 && now.second()==0){
      jamkeempat();
    }
    else if(now.hour()==10 && now.minute()==10 && now.second()==0){
      jamkelima();
    }
    else if(now.hour()==11 && now.minute()==40 && now.second()==0){
      akhirpelajaran();
    }
   }
   else if(now.dayOfTheWeek()==6){ //SABTU
    if(now.hour()==7 && now.minute()==15 && now.second()==0){
      senam();
    }
    else if(now.hour()==8 && now.minute()==5 && now.second()==0){
      jamkedua();
    }
    else if(now.hour()==8 && now.minute()==40 && now.second()==0){
      jamketiga();
    }
    else if(now.hour()==9 && now.minute()==15 && now.second()==0){
      istirahatpertama();
    }
    else if(now.hour()==9 && now.minute()==35 && now.second()==0){
      jamkeempat();
    }
    else if(now.hour()==10 && now.minute()==10 && now.second()==0){
      jamkelima();
    }
    else if(now.hour()==10 && now.minute()==45 && now.second()==0){
      istirahatkedua();
    }    
    else if(now.hour()==11 && now.minute()==5 && now.second()==0){
      jamkeenam();
    }
    else if(now.hour()==11 && now.minute()==40 && now.second()==0){
      akhirpekan();
    }
   }
}

void upacara() {
  mp3_play(1);
  delay(19000);
  mp3_play(1);
  delay(19000);
}
void kerohanian (){
  mp3_play(2);
  delay(10000);
  mp3_play(2);
  delay(10000);
}
void akhirpekan (){
  mp3_play(3);
  delay(20000);
  mp3_play(3);
  delay(20000);
  mp3_play(16);
}
void akhirpelajaran(){
  mp3_play(4);
  delay(21000);
  mp3_play(4);
  delay(21000);
  mp3_play(16);
}
void jampertama(){
  mp3_play(5);
  delay(17000);
  mp3_play(5);
  delay(17000);
}
void jamkedua(){
  mp3_play(6);
  delay(23000);
  mp3_play(6);
  delay(23000);
}
void jamketiga(){
  mp3_play(7);
  delay(23000);
  mp3_play(7);
  delay(23000);
}
void jamkeempat(){
  mp3_play(8);
  delay(16000);
  mp3_play(8);
  delay(16000);
}
void jamkelima(){
  mp3_play(9);
  delay(24000);
  mp3_play(9);
  delay(24000);
}
void jamkeenam(){
  mp3_play(10);
  delay(18000);
  mp3_play(10);
  delay(18000);
}
void jamketujuh(){
  mp3_play(11);
  delay(24000);
  mp3_play(11);
  delay(24000);
}
void istirahatkedua(){
  mp3_play(12);
  delay(10000);
  mp3_play(12);
  delay(10000);
}
void istirahatpertama(){
  mp3_play(13);
  delay(10000);
  mp3_play(13);
  delay(10000);
}
void berbaris(){
  mp3_play(15);
}
void senam(){
  mp3_play(17);
}
