//int myNumber;
float radius;
float area;
float pi =3.14;
String msg="What is the radius of your circle:";
String msg2="The area of your circle is: ";
//int numBlinks;
//int ledR=6;
//int bt = 150;
//int bt2 = 250;
//int j;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
while (!Serial);
//pinMode(ledR, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
Serial.println(msg);
Serial.read();
while(Serial.available()<=0); {
  
}
radius=Serial.parseFloat();
area=pi*radius*radius;
Serial.print(msg2);
Serial.println(area);
 

 }
//Serial.print(msg2);
//Serial.println(myNumber);
