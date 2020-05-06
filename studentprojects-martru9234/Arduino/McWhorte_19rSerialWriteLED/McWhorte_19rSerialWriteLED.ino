
int bLed = 5;
int rLed = 6;
int gLed = 9;
int yLed = 10;
String msg = ("red, green, blue, or yellow?");
String myColor;
String msg2 = ("Your color is ");

void setup() {
pinMode(bLed,OUTPUT);
pinMode(rLed,OUTPUT);
pinMode(gLed,OUTPUT);
pinMode(yLed,OUTPUT);
Serial.begin(9600);
while(!Serial);

}

void loop() {
   myColor = ""; // reset myColor to blank
   Serial.println(msg);
    while(myColor=="") {
    myColor = Serial.readString();
    }
   Serial.print("You selected "); 
   Serial.println(myColor);
   
   while (myColor == "blue"){
    digitalWrite(bLed,HIGH);
    digitalWrite(rLed,LOW);
    digitalWrite(gLed,LOW);
    digitalWrite(yLed,LOW);
    delay(5000);
    }
  while (myColor == "red"){
    digitalWrite(rLed,HIGH);
    digitalWrite(bLed,LOW);
    digitalWrite(gLed,LOW);
    digitalWrite(yLed,LOW);
     }
  while (myColor == "green"){
    digitalWrite(gLed,HIGH);
    digitalWrite(rLed,LOW);
    digitalWrite(bLed,LOW);
    digitalWrite(yLed,LOW);
     }
   while (myColor == "yellow"){
    digitalWrite(bLed,LOW);
    digitalWrite(rLed,LOW);
    digitalWrite(gLed,LOW);
    digitalWrite(yLed,HIGH);
     }
   }
   

   
    
    
