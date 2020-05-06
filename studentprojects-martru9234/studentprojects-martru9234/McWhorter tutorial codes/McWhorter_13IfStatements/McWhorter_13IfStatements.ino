int potPin = 23;
int ledPinB = 5;
int ledPinR = 6;
int ledPinG = 9;
int ledPinY = 10;
float V2;
int readVal;
int dt =250;


void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(potPin, INPUT);
pinMode(ledPinB, OUTPUT);
pinMode(ledPinR, OUTPUT);
pinMode(ledPinG, OUTPUT);
pinMode(ledPinY, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  readVal = analogRead(potPin);
  V2= (5./1023.)*readVal;
  Serial.print(" Potentiometer Votltage is ");
  Serial.println(V2);
  if (V2 >0.1 && V2 < 1.5){
    digitalWrite(ledPinB, HIGH);
    
  }
  if (V2 > 1.5 || V2 < 0.1) {
    digitalWrite(ledPinB, LOW);
  }

  if (V2 > 1.5 && V2 < 3.0){
  digitalWrite(ledPinR, HIGH);
  }
  if (V2 < 1.5 || V2 > 3.0){
  digitalWrite(ledPinR, LOW);
  }

  if (V2 > 3.0 && V2 < 4.0){
  digitalWrite(ledPinG, HIGH);
  }
  if (V2 < 3.0 || V2 > 4.0) {
  digitalWrite(ledPinG, LOW);
  }

  if (V2 > 4.0 && V2 <= 5.0){
  digitalWrite(ledPinY, HIGH);
  }
  if (V2 < 4.0){
  digitalWrite(ledPinY, LOW); 
  }
  delay(dt);
  }
