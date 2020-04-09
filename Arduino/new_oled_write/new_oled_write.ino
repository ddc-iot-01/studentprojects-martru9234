/*
 * Project OLEDwrite
 * Description: Learn to write to 128x24 OLED screen
 * Author: Marlene Trujillo
 * Date: 03/22/2020
 */

#include <Wire.h>
#include <ACROBOTIC_SSD1306.h>

String myname;
String mymsg;
String runningtime;
int blueButton = 5;
int blueState; 

void setup()
{                
    // Start Serial Monitor
    Serial.begin(9600);
   // while(!Serial);         // wait for serial to start running
    Serial.println("Serial Monitor Up and Running");

  // initialize OLED display
  Wire.begin();  
  oled.init();                      // Initialze SSD1306 OLED display
  oled.clearDisplay();              // Clear screen

  pinMode (blueButton, INPUT);
  blueState = LOW;

  myname = "Marlene";
  mymsg = "Welcome to IoT";
  runningtime = "button push";
}

void loop()                     
{
  blueState = digitalRead(blueButton);
if (blueState == HIGH)
  Serial.println("button is pressed");

    oled_write(myname, mymsg, millis());
    delay(500);
     
}

void oled_write(String myname, String mymsg, long clk) {
  oled.clearDisplay();              // Clear screen
  oled.setTextXY(0,0);              
  oled.putString("Hello World");
  oled.setTextXY(1,0);              
  oled.putString("from ");
  oled.setTextXY(1,5);              
  oled.putString(myname);
  oled.setTextXY(2,0);              
  oled.putString(mymsg);
  oled.setTextXY(3,0);             
  oled.putString("Elapse ");
  oled.setTextXY(3,8);             
  oled.putString(String(clk));
}
