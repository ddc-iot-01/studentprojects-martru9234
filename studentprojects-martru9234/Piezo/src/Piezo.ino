/*
 * Project Piezo
 * Description:
 * Author:
 * Date:
 */

int ledPin = D7;

void setup()
{
  Serial.begin(9600); 
  pinMode (ledPin, OUTPUT);
}
void loop()
{
      int val;
      val=analogRead(0);//Connect the sensor to analog pin 0
      Serial.println(val,DEC);//
      delay(100);
     
      if(val > 300){
        digitalWrite(ledPin,HIGH);
        }
        else
        {
          digitalWrite(ledPin,LOW);
          
        }
        
      }