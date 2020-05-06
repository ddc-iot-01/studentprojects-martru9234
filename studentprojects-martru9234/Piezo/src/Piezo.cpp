/******************************************************/
//       THIS IS A GENERATED FILE - DO NOT EDIT       //
/******************************************************/

#include "Particle.h"
#line 1 "c:/Users/ddcio_cmozqu/Desktop/OneDrive/Documents/marlene/Piezo/src/Piezo.ino"
/*
 * Project Piezo
 * Description:
 * Author:
 * Date:
 */

void setup();
void loop();
#line 8 "c:/Users/ddcio_cmozqu/Desktop/OneDrive/Documents/marlene/Piezo/src/Piezo.ino"
int ledPin = D7;

void setup()
{
  Serial.begin(9600); 
  pinMode (ledPin, OUTPUT);
}
void loop()
{
      int val;
      val=analogRead(0);//Connect the sensor to analog pin 0
      Serial.println(val,DEC);//
      delay(100);
     
      if(val > 300){
        digitalWrite(ledPin,HIGH);
        }
        else
        {
          digitalWrite(ledPin,LOW);
          
        }
        
      }