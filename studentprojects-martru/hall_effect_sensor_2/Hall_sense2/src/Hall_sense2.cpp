/******************************************************/
//       THIS IS A GENERATED FILE - DO NOT EDIT       //
/******************************************************/

#include "Particle.h"
#line 1 "c:/Users/martr/OneDrive/Documents/marlene/studentprojects-martru/hall_effect_sensor_2/Hall_sense2/src/Hall_sense2.ino"
/*
 * Project Hall_sense2
 * Description:hall sonsor with counter
 * Author:Marlene Trujillo
 * Date:5/10/20
 */
void setup();
void loop();
#line 7 "c:/Users/martr/OneDrive/Documents/marlene/studentprojects-martru/hall_effect_sensor_2/Hall_sense2/src/Hall_sense2.ino"
int hallPin = D6;
int hallsense;
int now ;
int then;
int counter;
int rpms;
int i;
void setup() {
 
Serial.begin(115200);
pinMode (hallPin,INPUT);
}

void loop() {
  
  now = millis();
  void rpm();
  Serial.println("hall sensor");
  Serial.println(rpms);
  Serial.println("rpm");
  delay(1);
}

void rpm(){
  then = (now + 1); 
 static int  counter = 0;
   
   for (i== now; i >= now; i++){ 
    hallsense = digitalRead(hallPin);
  
   if ((hallsense > 0)){
   
     counter++;
     //Serial.println("magnet detected");
     //delay(1000);
   }
rpms = ((counter*60));
  }

}


//else{
  //Serial.println("waiting");
  //delay(1000);

