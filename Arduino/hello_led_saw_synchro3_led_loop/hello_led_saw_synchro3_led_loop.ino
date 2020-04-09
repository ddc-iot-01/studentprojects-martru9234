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
int ledDelay = 50; // 1000 ms or 1 s
float i;
int out; // counter

 void setup() {
  // put your setup code here, to run once:
pinMode(ledRed, OUTPUT);
pinMode(ledGreen, OUTPUT);
pinMode(ledBlue, OUTPUT);
}

void loop(){
   //put your main code here, to run repeatedly:
 out = 255*(0.5*sin(2*3.14159*1)+0.5);
  analogWrite(ledRed,i);
  analogWrite(ledGreen,i);
  analogWrite(ledBlue,i); 
  i + i+0.01;
  delay(ledDelay);
}
