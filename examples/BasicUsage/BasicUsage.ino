#include <TwoWheeledRobot.h>
#include <Motor.h>

Motor leftMotor(7, 6), rightMotor(4, 5);

TwoWheeledRobot robot(&leftMotor, &rightMotor);

void setup() {
	//Nothing to do here
}

void loop() {
	robot.forward(150, 150);
	delay(5000);
	robot.backward(150, 150);
	delay(5000);
	robot.turnRight(150, 150);
	delay(5000);
	robot.turnLeft(150, 150);
	delay(5000);
	robot.stop();
	delay(5000);
}
