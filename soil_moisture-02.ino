/*
 * File:    soil_moisture.ino
 * Author:  Uncle RedBeard
 * Date:    19-NOV-2014
 * Desc:    Testing Sunkee Soil Hygrometer
 */
 
 int soil = 0;
 unsigned long waitTime = 10000;    //how long to pause - 5s to start
 unsigned long previousMillis = 0;
 
 void setup(){
   Serial.begin(9600);    //initialize serial comm at 9600 bps
 }
 
 void loop(){
   
   delay(1000);
   int sensorValue = analogRead(A0);
   
   Serial.println(sensorValue);
     
 }
