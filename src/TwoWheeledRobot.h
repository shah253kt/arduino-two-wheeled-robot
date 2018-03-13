/*
Author: Ahmad Shahril
Date: 13/03/2018
Description: This library is made for two wheeled robots. This library implements motor library that I've created earlier.
*/

#ifndef TwoWheeledRobot_H_INCLUDED
#define TwoWheeledRobot_H_INCLUDED

#if defined(ARDUINO) && ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif

#include <Motor.h>

class TwoWheeledRobot
{
	public:
		TwoWheeledRobot(Motor *leftMotor, Motor *rightMotor);
		void move(short leftSpeed, short rightSpeed);
		void forward(byte leftPwm, byte rightPwm);
		void backward(byte leftPwm, byte rightPwm);
		void turnLeft(byte leftPwm, byte rightPwm);
		void turnRight(byte leftPwm, byte rightPwm);
		void stop();

	private:
		Motor *leftMotor, *rightMotor;
};

#endif
