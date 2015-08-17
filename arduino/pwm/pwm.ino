/*
DS08-NFA SERVO MOTOR

https://en.wikipedia.org/wiki/Duty_cycle
Calculating duty cycle
  D= T/P * 100

eg: 1/20 * 100 = 7.5

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
float dutyCycle = 0.75;

void setup() {
  pinMode(9, OUTPUT);
}

void loop() {
   analogWrite(9, 255 * dutyCycle);
   delay(20); 
}
