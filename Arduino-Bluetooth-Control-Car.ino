#include <AFMotor.h>

AF_DCMotor motor1(1); // Motor 1 on M1
AF_DCMotor motor2(2); // Motor 2 on M2
AF_DCMotor motor3(3); // Motor 3 on M3
AF_DCMotor motor4(4); // Motor 4 on M4

char command = ' ';

void setup() {
  Serial.begin(9600);
  Serial.println("Bluetooth Car Ready");
}

void loop() {
  if (Serial.available() > 0) {
    command = Serial.read();
    Serial.println(command);
    controlCar(command);
  }
}

void controlCar(char cmd) {
  switch (cmd) {
    case 'F': forward(); break;
    case 'B': backward(); break;
    case 'L': left(); break;
    case 'R': right(); break;
    case 'S': stopCar(); break;
    default: stopCar(); break;
  }
}

void forward() {
  motor1.setSpeed(200); motor1.run(FORWARD);
  motor2.setSpeed(200); motor2.run(FORWARD);
  motor3.setSpeed(200); motor3.run(FORWARD);
  motor4.setSpeed(200); motor4.run(FORWARD);
}

void backward() {
  motor1.setSpeed(200); motor1.run(BACKWARD);
  motor2.setSpeed(200); motor2.run(BACKWARD);
  motor3.setSpeed(200); motor3.run(BACKWARD);
  motor4.setSpeed(200); motor4.run(BACKWARD);
}

void left() {
  motor1.setSpeed(200); motor1.run(BACKWARD);
  motor2.setSpeed(200); motor2.run(FORWARD);
  motor3.setSpeed(200); motor3.run(BACKWARD);
  motor4.setSpeed(200); motor4.run(FORWARD);
}

void right() {
  motor1.setSpeed(200); motor1.run(FORWARD);
  motor2.setSpeed(200); motor2.run(BACKWARD);
  motor3.setSpeed(200); motor3.run(FORWARD);
  motor4.setSpeed(200); motor4.run(BACKWARD);
}

void stopCar() {
  motor1.run(RELEASE);
  motor2.run(RELEASE);
  motor3.run(RELEASE);
  motor4.run(RELEASE);
}
