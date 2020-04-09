/*
 * Project: Hello World - IoT Style
 * Description: Second Program
 * Author: Marlene Trujillo
 * Date: 25-feb-2020
 */

 //connect anode of LED to pin 5
 //Connect cathode of LED to GND with 470 ohm resistor

int ledRed = 5;
int ledGreen = 6;
int ledBlue = 7;
int ledDelay = 1000; // 1000 ms or 1 s

 void setup() {
  // put your setup code here, to run once:
pinMode(ledRed, OUTPUT);
pinMode(ledGreen, OUTPUT);
pinMode(ledBlue, OUTPUT);
}

void loop(){
   //put your main code here, to run repeatedly:
analogWrite(ledRed, 255);
delay(1000);
analogWrite(ledRed, 25);
delay(100);
analogWrite(ledGreen, 255);
delay(1000);
analogWrite(ledGreen, 10);
delay(50);
analogWrite(ledBlue, 255);
delay(500);
analogWrite(ledBlue, 5);
delay(250);
}


 
