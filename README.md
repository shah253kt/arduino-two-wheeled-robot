## Introduction
This library is made to easily control two wheeled robots. This library depends on another library that I've written before. You have to install that library as well.

You may download the library [here] {https://github.com/shah253kt/arduino-motor}.

## Functions
### Constructor
**TwoWheeledRobot**(Motor *leftMotor, Motor *rightMotor);
This constructor uses pointers to the left and right motors.

Usage:
...cpp
Motor leftMotor(4, 5), rightMotor(7, 6);
TwoWheeledRobot robot(&leftMotor, &rightMotor);
...

### Forward/Backward
**forward**(byte leftPwm, byte rightPwm);
**backward**(byte leftPwm, byte rightPwm);
These functions causes both motors move forward and backward. If you notice any or both of the motors turning the wrong way, simply call `inverseDirection` function on the motor itself.

Usage:
...cpp
robot.forward(255, 255);

//If left motor is turning the wrong way, call this function in Arduino setup function:
leftMotor.inverseDirection();
...

### Turn Right/Left
**turnRight**(byte leftPwm, byte rightPwm);
**turnLeft**(byte leftPwm, byte rightPwm);
These functions are suitable for tank-like configuration which allows you to rotate the robot in fixed position where one motor is turning in different direction from the other.

Usage:
...cpp
robot.turnRight(255, 255);

robot.turnLeft(255, 255);
...

### Stop
**stop**();
To stop both motors.

Usage:
...cpp
robot.stop();
...

### Move
**stop**(short leftSpeed, short rightSpeed);
This function allows you to supply negative values for the pwm. Negative values will cause the motor to turn backward and vice versa.

Usage:
...cpp
robot.move(-100, 150);
...
