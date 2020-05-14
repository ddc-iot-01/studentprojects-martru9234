/******************************************************/
//       THIS IS A GENERATED FILE - DO NOT EDIT       //
/******************************************************/

#include "Particle.h"
#line 1 "c:/Users/martr/OneDrive/Documents/marlene/studentprojects-martru/hall_effect_sensor/hallEffectForSaw/src/hallEffectForSaw.ino"
/*
 * Project hallEffectForSaw
 * Description: hall effect sensor code for band saw
 * Author:Marlene Trujillo
 * Date:05/10/20
 */
/*
int hallPin = A0;
int last;
int mag;
int time1;
int time2;


// setup() runs once, when the device is first turned on.
void setup() {
  // Put initialization like pinMode and begin functions here.
Serial.begin(9600);
pinMode(hallPin,INPUT);
time1 = 0;
time2 = 0;
Serial.println("lets roll");
}

// loop() runs over and over again, as quickly as it can execute.
void loop() {
  // The core of your code will likely live here.
mag = digitalRead(hallPin);
static int last = FALSE;

Serial.println(mag);
while ((mag == LOW) && (last == FALSE)){                  // time 1
  if (time1 == 0){
  last = mag; 
  time1 = millis();
  Serial.println("i am here");
  }
  else{
    last = !mag;
    Serial.println ("i AM HERE2");
  }
}
}
/*while  ((mag == TRUE) && (last == FALSE)){                // time 2
  if (time2 == 0) { 
  last = mag; 
  time2= millis();
  }
  else{
    last = !mag;
  }
}
 int rotationT = (time2-time1);
  int rpm = (60000/rotationT);
  Serial.println(rpm);
}
*/
void setup();
void loop();
#line 58 "c:/Users/martr/OneDrive/Documents/marlene/studentprojects-martru/hall_effect_sensor/hallEffectForSaw/src/hallEffectForSaw.ino"
int hall_pin = A0;
// set number of hall trips for RPM reading (higher improves accuracy)
float hall_thresh = 5.0;

void setup() {
  // initialize serial communication at 9600 bits per second:
  Serial.begin(9600);
  // make the hall pin an input:
  pinMode(hall_pin, INPUT);
  Serial.println("hello");
}

// the loop routine runs over and over again forever:
void loop() {
  // preallocate values for tach
  float hall_count = 0.0;
  float start = millis();
  bool on_state = false;
  // counting number of times the hall sensor is tripped
  // but without double counting during the same trip
  while(true){
    if (digitalRead(hall_pin)==0){
      if (on_state==false){
        on_state = true;
        hall_count+=1.0;
       // Serial.println(hall_count);
      }
    } else{
      on_state = false;
    }
    
    if (hall_count>=hall_thresh){
      break;
    }
  }
  
  // print information about Time and RPM
  float end_time = millis();
  float time_passed = ((end_time-start)/1000.0);
  Serial.print("Time Passed: ");
  Serial.print(time_passed);
  Serial.println("s");
  float rpm_val = (hall_count/time_passed)*60.0;
  Serial.print(rpm_val);
  Serial.println(" RPM");
  //delay(1);        // delay in between reads for stability
}
