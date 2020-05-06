int redPin = 23;
int bright1 = 255;
int bright2 = 200;
int bright3 = 150;
int bright4 = 100;
int bright5 = 50;
int bright6 = 5;
int bright7 = 0;
int trans = 150;

void setup() {
  // put your setup code here, to run once:
pinMode(redPin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
analogWrite(redPin, bright1);
delay(trans);

analogWrite(redPin, bright2);
delay(trans);

analogWrite(redPin, bright3);
delay(trans);

analogWrite(redPin, bright4);
delay(trans);

analogWrite(redPin, bright5);
delay(trans);

analogWrite(redPin, bright6);
delay(trans);

analogWrite(redPin, bright7);
delay(trans);

}
