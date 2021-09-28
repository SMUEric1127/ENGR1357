#include <Servo.h>
Servo myServo;
void setup() {
  // put your setup code here, to run once:
  myServo.attach(2);
}

void loop() {
  // put your main code here, to run repeatedly:
  myServo.write(160);
//  delay(1000);
//  myServo.write(50);
//  delay(1000);
}
