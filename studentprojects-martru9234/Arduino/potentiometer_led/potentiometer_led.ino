int inPin = 14;
int inputDelay = 30;
int inVal;
int outPin = 5;
float inVolts;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  while(!Serial);

  pinMode(inPin, INPUT);
  pinMode(outPin, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  inVal = analogRead(inPin);
  analogWrite(outPin, inVal/4);
  Serial.println(inVal);
  inVolts = in2volt(inVal);
  Serial.println(inVolts);
  delay(inputDelay);
}
float in2volt(int inBits){
  float volts;
  {volts=(inBits/1023.0*3.3);
  return volts;
  
}
  

}
