int myNumber;
String msg="Please enter your number:";
String msg2="Your number is: ";
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
while (!Serial);
}

void loop() {
  // put your main code here, to run repeatedly:
Serial.println(msg);
Serial.read();
while(Serial.available()<=0) {
  
}
  myNumber=Serial.parseInt();
Serial.print(msg2);
Serial.println(myNumber);
}
