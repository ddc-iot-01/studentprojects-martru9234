/*
 * Project power_switch
 * Description:turn on vacuum at certain air/particulate standard
 * Author:Marlene Trujillo
 * Date:5/4/2020
 */
#include <Particle.h>
#include <math.h>
#include <Air_Quality_Sensor.h>



int switchPin = D4; //vacuum switch
int airPin = D8; //air quality sensor input
int piezoPin = A0;
int piez[5000];
int i;
int val;
unsigned long duration;
unsigned long starttime;
unsigned long sampletime_ms = 5000;//sampe 30s ;
unsigned long lowpulseoccupancy = 0;
float ratio = 0;
float concentration = 0;
int hall_pin = A0;
// set number of hall trips for RPM reading (higher improves accuracy)
float hall_thresh = 3.0;



void setup() {

Serial.begin(9600);
    pinMode(D4, OUTPUT);
    pinMode(airPin,INPUT);
    pinMode(piezoPin, INPUT);
    pinMode(hall_pin, INPUT);
  Serial.println("hello");

    starttime = millis();//get the current time;
}

void loop() {
  // The core of your code will likely live here.
//digitalWrite(switchPin, HIGH);
//delay(10000);
//digitalWrite(switchPin, LOW);
//delay(10000);

    duration = pulseIn(airPin, LOW);
    lowpulseoccupancy = lowpulseoccupancy+duration;

    if ((millis()-starttime) > sampletime_ms)//if the sample time == 30s
    {
        ratio = lowpulseoccupancy/(sampletime_ms*10.0);  // Integer percentage 0=>100
        concentration = 1.1*pow(ratio,3)-3.8*pow(ratio,2)+520*ratio+0.62; // using spec sheet curve
        Serial.print(lowpulseoccupancy);
        Serial.print(",");
        Serial.print(ratio);
        Serial.print(",");
        Serial.println(concentration);
        lowpulseoccupancy = 0;
        starttime = millis();
    }
    //analogRead(concentration);
   if (concentration >19000){
    digitalWrite(switchPin, HIGH);
    Serial.println("vacuum on");
   }
    if (concentration<19000){
        digitalWrite(switchPin,LOW);
        Serial.println("vacuum off");
    }
  
}
float stdevArray(int data[5000]) 
  {
  float stdev=0;
  int i;
  float mean = 0;
  for(i=0;i<5000;i++) {
    mean += data[i];
  }
  mean = mean/5000.0;
  for(i=0;i<5000;i++) {
    stdev += pow((data[i]-mean),2);
  }
  stdev = sqrt(stdev/5000.0);
  return stdev;
}
//void hall() {// turn into a function
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
  }//delay(1);        // delay in between reads for stability
}




