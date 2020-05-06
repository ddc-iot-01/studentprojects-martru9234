/*
 * Project: Serial monitor test
 * Description: program serial monitor
 * Author: Marlene Trujillo
 * Date: 27-feb-2020
 */

 

int ledDelay = 1000; // 1000 ms or 1 s
int i;


void setup() {
  
// Enable Serial Monitor
  Serial.begin (9600);   
  while (!Serial);    //wait for serial monitor to be on-line
  Serial.println ("Ready to Go");
  
  for (i=0; i <=13; i++){
  Serial.println(i);
  delay(ledDelay);
  }
} 

void loop(){


}
