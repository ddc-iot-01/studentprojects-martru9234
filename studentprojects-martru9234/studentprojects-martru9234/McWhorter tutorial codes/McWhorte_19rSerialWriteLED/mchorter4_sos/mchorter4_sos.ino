int bluePin =5;
int redPin = 6;
int greenPin = 9;
int dit = 100;
int dah = 500;
int LongW = 800;


void setup() {
  // put your setup code here, to run once:
  pinMode(bluePin, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(bluePin, HIGH);
  delay(dit);
  digitalWrite(bluePin, LOW);
  delay(dit);
  digitalWrite(bluePin, HIGH);
  delay(dit);
  digitalWrite(bluePin, LOW);
  delay(dit);
  digitalWrite(bluePin, HIGH);
  delay(dit);
  digitalWrite(bluePin, LOW);
  delay(dah);

  digitalWrite(bluePin, HIGH);
  delay(dah);
  digitalWrite(bluePin, LOW);
  delay(dah);
  digitalWrite(bluePin, HIGH);
  delay(dah);
  digitalWrite(bluePin, LOW);
  delay(dah);
  digitalWrite(bluePin, HIGH);
  delay(dah);
  digitalWrite(bluePin, LOW);
  delay(dah);
  
  digitalWrite(bluePin, HIGH);
  delay(dit);
  digitalWrite(bluePin, LOW);
  delay(dit);  
  digitalWrite(bluePin, HIGH);
  delay(dit);
  digitalWrite(bluePin, LOW);
  delay(dit);
  digitalWrite(bluePin, HIGH);
  delay(dit);
  digitalWrite(bluePin, LOW);
  delay(dit);

  delay(LongW); 
}
