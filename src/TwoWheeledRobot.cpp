/*
Author: Ahmad Shahril
Date: 13/03/2018
Description: This library is made for two wheeled robots. This library implements motor library that I've created earlier.
*/

#if defined(ARDUINO) && ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif

#include "TwoWheeledRobot.h"

TwoWheeledRobot::TwoWheeledRobot(Motor *_leftMotor, Motor *_rightMotor) {
	leftMotor = _leftMotor;
	rightMotor = _rightMotor;
}

void TwoWheeledRobot::move(short leftSpeed, short rightSpeed) {
	if(leftSpeed < 0) {
		leftMotor->backward(abs(leftSpeed));
	}
	else if(leftSpeed > 0) {
		leftMotor->forward(leftSpeed);
	}
	else {
		leftMotor->stop();
	}
	
	if(rightSpeed < 0) {
		rightMotor->backward(abs(rightSpeed));
	}
	else if(rightSpeed > 0) {
		rightMotor->forward(rightSpeed);
	}
	else {
		rightMotor->stop();
	}
}

void TwoWheeledRobot::forward(byte leftPwm, byte rightPwm) {
	leftMotor->forward(leftPwm);
	rightMotor->forward(rightPwm);
}

void TwoWheeledRobot::backward(byte leftPwm, byte rightPwm) {
	leftMotor->backward(leftPwm);
	rightMotor->backward(rightPwm);
}

void TwoWheeledRobot::turnLeft(byte leftPwm, byte rightPwm) {
	leftMotor->backward(leftPwm);
	rightMotor->forward(rightPwm);
}

void TwoWheeledRobot::turnRight(byte leftPwm, byte rightPwm) {
	leftMotor->forward(leftPwm);
	rightMotor->backward(rightPwm);
}

void TwoWheeledRobot::stop() {
	leftMotor->stop();
	rightMotor->stop();
}
