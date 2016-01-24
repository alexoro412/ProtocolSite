/*
  This sketch is example code for the Servo module

  By Samuel Cohen for Protocol Electronics LLC
  
  Plug a servo module into the correct port to make this code work.
 */
#include <Servo.h> //include the functions needed to operate a servo
Servo myServo; // create a servo and call it myServo

int servoPin = 3; // save a pin for the servo myServo
void setup() {
  
  myServo.attach(servoPin); // attach myServo to the servo pin for communication

}

void loop() {
  myServo.write(0); // tell the servo to travel to 0 degrees
  delay(1000); // give the servo time to travel to its destination
  myServo.write(180); // tell the servo to travel to 180 degrees (the full range of its motion)
  delay(1000);

}
