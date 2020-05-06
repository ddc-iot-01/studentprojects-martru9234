int j;
int DT = 100;
int potPin = 23;
int ledR = 10;
float potVal; 

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(potPin, INPUT);
pinMode(ledR, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
potVal = analogRead(potPin);
Serial.println(potVal);
delay(DT);

while (potVal > 1000) {
  digitalWrite(ledR, HIGH);
  potVal =analogRead(potPin);
  Serial.println(potPin);
  delay(DT);
}
digitalWrite(ledR, LOW);
while (j <= 10) {
  Serial.println(j);
  j = j+1;
  delay(DT);
}
Serial.println();
}
