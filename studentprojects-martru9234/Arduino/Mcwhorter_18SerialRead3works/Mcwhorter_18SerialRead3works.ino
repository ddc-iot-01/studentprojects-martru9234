int myNumber;
String msg="How many blinks do you want:";
//String msg2="Your number is: ";
int numBlinks;
int ledR=6;
int bt = 150;
int bt2 = 250;
int j;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
while (!Serial);
pinMode(ledR, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
Serial.println(msg);
Serial.read();
while(Serial.available()<=0); {
  
}
 numBlinks=Serial.parseInt();
 for (j=1;j<=numBlinks; j=j+1){
  digitalWrite(ledR, HIGH);
  delay(bt);
  digitalWrite(ledR, LOW);
  delay(bt2);
 }
//Serial.print(msg2);
//Serial.println(myNumber);

}
