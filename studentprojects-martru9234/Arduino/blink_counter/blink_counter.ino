/*
   Project:multiple led/button counter
   Description: 3 led 3button blinker counter
   Author: Marlene Trujillo
   Date: 3/1/20
*/

int buttonPinB = 23;
int buttonPinR = 24;
int buttonStateB;
int buttonStateR;
int ledPinB = 5;
int ledPinR = 6;
int counter;
int flashes;

void setup()
{
  // put your setup code here, to run once:
  pinMode(buttonPinB, INPUT);
  pinMode(ledPinB, OUTPUT);
  pinMode(buttonPinR, INPUT);
  pinMode(ledPinR, OUTPUT);

  Serial.begin(9600); // Turn on Serial Monitor at speed 9600 bps
  //while(!Serial);     // This is dangerous
  delay(10);           // instead let's just use a short delay
  Serial.println("Hello - I am getting started");
}

void loop() {
  // put your main code here, to run repeatedly:

  buttonStateB = digitalRead(buttonPinB);
  buttonStateR = digitalRead(buttonPinR);
  Serial.print("The Button State is ");
  Serial.println(buttonStateB);
  Serial.println(buttonStateR);

  if (buttonStateB == LOW, buttonStateR == LOW) {
    Serial.println("Button is NOT pressed!!!!");
    digitalWrite(ledPinB, LOW);
    digitalWrite(ledPinR, LOW);
  }
  else {
    Serial.println("Button is pressed");
    Serial.println("Glad it is Friday");
    counter++;

    Serial.print("The counter is equal to "); Serial.println(counter);
    digitalWrite(ledPinB, HIGH);
    digitalWrite(ledPinR, HIGH);

    for ( flashes < counter; flashes++;) {
      digitalWrite(ledPinB, HIGH);
      digitalWrite(ledPinR, HIGH);
      delay(100);
      digitalWrite(ledPinB, LOW);
      digitalWrite(ledPinR, LOW);
      delay(1000);
    }
  }

  delay(250);
}
