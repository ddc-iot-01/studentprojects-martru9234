/*
 * Project power_switch
 * Description:turn on vacuum at certain air/particulate standard
 * Author:Marlene Trujillo
 * Date:5/4/2020
 */
#include <math.h>
#include <Air_Quality_Sensor.h>

int switchPin = D4; //vacuum switch
int airPin = D8; //air quality sensor input
unsigned long duration;
unsigned long starttime;
unsigned long sampletime_ms = 5000;//sampe 30s ;
unsigned long lowpulseoccupancy = 0;
float ratio = 0;
float concentration = 0;


void setup() {
pinMode(D4, OUTPUT);
Serial.begin(9600);
    pinMode(airPin,INPUT);
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
