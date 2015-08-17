/* 
https://www.arduino.cc/en/Reference/Servo
-------------------------------
Table from the User manual
-------------------------------
Period Of High Logic Within
20ms Period Of Pulse. (ms)
-------------------------------
1 Rotate in one direction with the maximum speed.
1.1 ~ 1.4 Rotate in one direction with the gradually decreasing
1.5 Stops rotate.
1.6 ~ 1.9 Rotate in another direction with gradually increasing
2.0 Rotate in another direction with the maximum speed.
*/

#include <Servo.h>

Servo myservo;  // create servo object to control a servo

void setup()
{
  myservo.attach(9);  // attaches the servo on pin 9 to the servo object
}

void loop() 
{ 
  myservo.writeMicroseconds(1550);  //1.5 seconds , I've added for fine ajustment.   (Stops rotate.)
  delay(2000);      
 //myservo.writeMicroseconds(1000);  //Rotate in one direction with the maximum speed.    
 //delay(2000);   
 //myservo.writeMicroseconds(2000);  //Rotate in another direction with the maximum speed.  
 //delay(2000);   
} 

