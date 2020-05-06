/*
 * Project: Serial monitor test
 * Description: button state
 * Author: Marlene Trujillo
 * Date: 27-feb-2020
 * edited to work 1-Mar-2020
 */

 

int ledDelayB = 100; // 1000 ms or 1 s
int ledDelayR = 100;
//Connect button to Pin 23. add Pull-down resistor to button terminal, Vcc to other.
int buttonPinB = 23;
int buttonPinR = 22; 
int buttonStateB;
int buttonStateR; // variable to store button position 
int ledPinB = 5;
int ledPinR = 6;



void setup() {
 pinMode(buttonPinB, INPUT);
 pinMode(buttonPinR, INPUT);
 pinMode(ledPinB, OUTPUT);
 pinMode(ledPinR, OUTPUT);
 
// Enable Serial Monitor
  Serial.begin (9600);   
  while (!Serial);    //wait for serial monitor to be on-line
  Serial.println();
  Serial.println ("Ready to Go");
} 

void loop(){
  buttonStateB = digitalRead(buttonPinB);
  
  
  
  if (buttonStateB == HIGH)
  {
      Serial.println("Button is pressed");
      digitalWrite(ledPinB, HIGH);
      }

 else
 {
   Serial.println("Button is not pressed");
   digitalWrite(ledPinB, LOW);
   }
   

delay(ledDelayB);

{buttonStateR = digitalRead(buttonPinR);
    if(buttonStateR == HIGH)
    {
      Serial.println("ButtonR is pressed"); 
      digitalWrite(ledPinR, HIGH);
      delay(ledDelayR);
    }
else
{
  Serial.println("ButtonR is not pressed");
  digitalWrite(ledPinR, LOW);
  }

delay(ledDelayR);}
}
}

  
   

   
  
