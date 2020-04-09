/*
 * Project: Saw Tooth
 * Description: 4-loop program
 * Author: Marlene Trujillo
 * Date: 26-feb-2020
 */

 //connect anode of LED to pin 5
 //Connect cathode of LED to GND with 470 ohm resistor

int ledRed = 5;
int ledGreen = 6;
int ledBlue = 9;
int ledDelay = 1; // 1000 ms or 1 s
int i; // counter
 void setup() {
  // put your setup code here, to run once:
pinMode(ledRed, OUTPUT);
pinMode(ledGreen, OUTPUT);
pinMode(ledBlue, OUTPUT);
}

void loop(){
   //put your main code here, to run repeatedly:
for(i=0;i<256;i++){
  analogWrite(ledRed,i);
  analogWrite(ledGreen,i);
  analogWrite(ledBlue,i);
  delay(ledDelay);
}
for(i=255;i>=0;i--) {
  analogWrite(ledRed,i);
  analogWrite(ledGreen,i);
  analogWrite(ledBlue,i);
  delay(ledDelay);}
}
