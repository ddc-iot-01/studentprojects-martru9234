int potPin = 23;
int bluePin = 5;
int readVal;
float V2;
int delayT = 50;


void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
readVal = analogRead(potPin);
V2 = (5./1023.)*readVal;
Serial.println(V2);
analogWrite(bluePin, V2);
delay(delayT);
}
