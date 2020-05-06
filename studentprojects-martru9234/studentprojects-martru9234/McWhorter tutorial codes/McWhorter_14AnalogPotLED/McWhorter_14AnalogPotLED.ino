int potPin = 23;
float readVal;
int ledB = 5;
float ledVal;
int potVal;
int dt = 250;


void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(potPin, INPUT);
  pinMode(ledB, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  potVal = analogRead(potPin);
  ledVal = (225./1023.)*potVal;
  analogWrite(ledB, ledVal);
  Serial.println(ledVal);
  //delay(dt);
  
}
