float j;
int DT = 1;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  for (j = 10.; j>= 1.; j = j - 0.01){
    Serial.println(j);
    delay(DT);
  }
  Serial.println();

}
