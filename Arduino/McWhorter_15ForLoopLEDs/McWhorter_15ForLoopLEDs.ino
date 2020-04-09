int ledR = 6;
int ledY = 10;
int redTime = 150;
int yelTime = 750;
int redBlnk = 3;
int yelBlnk = 5;
int j;
String redMess = "Red Blink = ";
String yelMess = "Yellow Blink = ";

void setup() {
  // put your setup code here, to run once:
   
  pinMode(ledR, OUTPUT);
  pinMode(ledY, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
   for(j = 1; j <= yelBlnk; j = j + 1){
    Serial.print(yelMess);
    Serial.println(j);
  digitalWrite(ledY, HIGH);
  delay(yelTime);
  digitalWrite(ledY, LOW);
  delay(yelTime);
}

    for(j = 1;  j <= redBlnk; j = j + 1){
   Serial.print(redMess);
   Serial.println(j);
  digitalWrite(ledR, HIGH);
  delay(redTime);
  digitalWrite(ledR, LOW);
  delay(redTime);
  }

}
