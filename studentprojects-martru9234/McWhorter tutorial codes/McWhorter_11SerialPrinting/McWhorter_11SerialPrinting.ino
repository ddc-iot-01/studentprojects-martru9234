int j = 1;
int waitT = 750;
String myString = " + ";
float pi = 3.14;
float r = 2;
float area;
int x = 3;
int y = 7;
int z;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);

}

void loop() {
  // put your main code here, to run repeatedly:
  area = pi*r*r;
  Serial.print("A Circle With Radius ");
  Serial.print(r);
  Serial.print(" Has an Area of ");
  Serial.print(area);
  Serial.println(".");
  r = r+.5;
//z=x+y;
//Serial.print(x);
//Serial.print(myString);
//Serial.print(y);
//Serial.print(" = ");
//Serial.println(z);
delay(waitT);
}
