/*
 * File:    soil_moisture.ino
 * Author:  Uncle RedBeard
 * Date:    19-NOV-2014
 * Desc:    Testing Sunkee Soil Hygrometer
 */
 
 int soil = 0;
 unsigned long waitTime = 2000;
 unsigned long previousMillis = 0;
 
 void setup(){
   Serial.begin(9600);    //initialize serial comm at 9600 bps
 }
 
 void loop(){
   
   if ((unsigned long)(millis() - previousMillis) >= waitTime) {
     //read input val on A0 - analog pin
     int sensorValue = analogRead(A0);
     //sensorValue = constrain(sensorValue, 485, 1023);
   
     //raw sensor value
     Serial.println(sensorValue);
   
     //map the value to a percentage
     soil = map(sensorValue, 375, 1023, 100, 0);
     
     //print the soil moisture percentage
     Serial.print(soil);
     Serial.println("%");
   }
     
 }
