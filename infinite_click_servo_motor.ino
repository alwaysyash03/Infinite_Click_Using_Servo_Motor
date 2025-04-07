#include <Servo.h>

Servo myServo; 
int servoPin = 9; 
int clickAngle = 45; 
int restAngle = 90;  

void setup() {
  myServo.attach(servoPin);
  myServo.write(restAngle); 
  delay(1000); 
}

void loop() {
  myServo.write(clickAngle); 
  delay(500); 
  myServo.write(restAngle);
  delay(500); 
}
