void setup() {
  // put your setup code here, to run once:
  pinMode(5,OUTPUT);
  pinMode(6,OUTPUT);
  pinMode(9,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(5,HIGH);
  delay(500);
  digitalWrite(5,LOW);
  delay(500);
  digitalWrite(6,HIGH);
  delay(1000);
  digitalWrite(6,LOW);
  delay(1000);
  digitalWrite(9, HIGH);
  delay(250);
  digitalWrite(9,LOW);
  delay(250);

}
