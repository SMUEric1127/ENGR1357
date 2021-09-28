#include <Servo.h>
Servo myServo;
void setup() {
  myServo.attach(2); // Choose your motor/servo pin
}

void loop() {
  // usually write will have the value from 0 - 180 or 0 - 360, try to play around, as I try, 160 will do the clock wise and 50 will do anti-clockwise
  myServo.write(160);
//  delay(1000);
//  myServo.write(50);
//  delay(1000);
}
