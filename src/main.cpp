#include <Arduino.h>
#include <RBE1001Lib.h>

LeftMotor left;
RightMotor right;

// Chassis chassis;

void setup() {
  //chassis.init();
  //chassis.setMotorPIDcoeffs(5, 0.5);
  Serial.begin(115200);
}

void loop() {
  //chassis.setMotorEfforts(50, 50);
  delay(1000);
  //chassis.setMotorEfforts(0, 0);
  delay(1000);
}