/*
 * Project: Hello World - IoT Style
 * Description: Second Program
 * Author: Marlene Trujillo
 * Date: 25-feb-2020
 * /

 //connect anode of LED to pin 5
 //Connect cathode of LED to GND with 680 ohm resistor 
 */void setup() {
  // put your setup code here, to run once:
pinMode(5, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(5, HIGH);
delay(1000);
digitalWrite(5, LOW);
delay(50);
}
