/*
 * Project: Serial monitor test
 * Description: button state
 * Author: Marlene Trujillo
 * Date: 27-feb-2020
 */

 

int ledDelay = 1000; // 1000 ms or 1 s
//Connect button to Pin 23. add Pull-down resistor to button terminal, Vcc to other.
int buttonPin = 23;
int buttonState; // variable to store button position 



void setup() {
pinMode(buttonPin, INPUT);
 
// Enable Serial Monitor
  Serial.begin (9600);   
  while (!Serial);    //wait for serial monitor to be on-line
  Serial.println();
  Serial.println ("Ready to Go");
} 

void loop(){
  
  buttonState = digitalRead(buttonPin);
  if (buttonState == LOW) {
      Serial.println("Button is not pressed");
}
 else
 {
   Serial.println("Button is pressed");
 }

delay(ledDelay);
}

   
  
