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
int ledPin = 5;
int i=0;
int j=0;




void setup() {
pinMode(buttonPin, INPUT);
pinMode(ledPin, OUTPUT);



 
// Enable Serial Monitor
  Serial.begin (9600);   
  while (!Serial);    //wait for serial monitor to be on-line
  Serial.println();
  Serial.println ("Ready to Go");
} 

void loop(){
  buttonState = digitalRead(buttonPin);
  if (buttonState == HIGH){
    Serial.println();
      Serial.println("Button pressed");
      i++;
      for (j=0; j < i; j++); 
 {
   Serial.println("Button is pressed"); 
      digitalWrite (ledPin, HIGH);
      delay(100);
      digitalWrite  (ledPin,LOW);
      delay(100);
    }
}
}
 
   
   



   
  
