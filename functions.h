 void joystickControl()
{
  motor[driveR1] = motor[driveR2]	= vexRT[Ch2];
	motor[driveL1] = motor[driveL2] = vexRT[Ch3];
}

void armCanMove()
{
	if(vexRT[Btn5U] == 1)
	{
		armMotors = 127;
	}

	else if(vexRT[Btn5D] == 1)
	{
		armMotors = -127;
	}
	else
	{
		armMotors = 0;
	}
}


void clawCanMove()
{

	if(vexRT[Btn8U] == 1)
	{
		claw = 100;
	}

	else if(vexRT[Btn8D] == 1)
	{
		claw = -100;
	}

	else
	{
		claw = 0;
	}

}


void wristCanMove() //look at/change values for motor
{
	if(vexRT[Btn6U] == 1)
	{
		wrist = 127;
	}

	else if(vexRT[Btn6D] == 1)
	{
		wrist = -127;
	}

	else
	{
		wrist = 0;
	}
}

void mobileGoalLifter()
{
	if(vexRT[Btn7U] == 1)
	{
		mobileGoal = -100;
	}

	else if(vexRT[Btn7D] == 1)
	{
		mobileGoal = 127;
	}

	else
	{
		mobileGoal = 0;
	}
}

void moveArm(int speed)
{
	armMotors = speed;
}

void moveMobileGoal(int speed)
{
	mobileGoal = speed;
}

void moveWrist(int speed)
{
		wrist = speed;
}

void moveClaw(int speed)
{
		claw = speed;
}

void stopDrivingClearSensor()
{
	 motor[driveL1] = motor[driveR1] = motor[driveL2] = motor[driveR2] = 0;

	SensorValue(driveSensor) = SensorValue(driveRightSensor);

}


void driveDist(int dist)
{
	while(SensorValue[driveRightSensor] < dist)
	{
		driveHalfSpeed;
	}

	stopDrivingClearSensor();

	delay(100);

}

void turnL(int dist)
{
	while(SensorValue[driveSensor] > -dist)
	{
		motor[driveL1] = motor[driveL2] = -75;
		motor[driveR1] = motor[driveR2] = 75;
	}

	stopDrivingClearSensor();

	delay(250);

}

void turnR(int dist)
{
	while(SensorValue[driveSensor] < dist)
	{
		motor[driveL1] = motor[driveL2] = 75;
		motor[driveR1] = motor[driveR2] = -75;
	}

	stopDrivingClearSensor();

	delay(250);

}


void driveBackDist(int dist)
{
		while(SensorValue[driveSensor] > -dist)
	{
		driveBackHalfSpeed;
	}

	stopDrivingClearSensor();

	delay(250);

}

void driveAndLiftArm(int dist)
{
driveDist(dist);
}

void turnR90() //Assuming One Sensor, on Right Side of DriveTrain
{
	turnR(90);
}

void turnL90()
{
	turnL(90);
}

void batteryLCDScreen()
{
	clearLCDLine(0);
	clearLCDLine(1);

	displayLCDPos(0,0);
	displayNextLCDString("Batt Lvl:");
	displayLCDPos(0,10);
	displayNextLCDNumber(battLevel);
}

//void batteryLED()
//{
//	if(nImmediateBatteryLevel > 8000)
//	{
//		SensorValue(greenLED1) = SensorValue(greenLED2) = 1;
//		SensorValue(redLED1) 	 = SensorValue(redLED2) 	= 0;
//	}

//	else
//	{
//		SensorValue(greenLED1) = SensorValue(greenLED2) = 0;
//		SensorValue(redLED1) 	 = SensorValue(redLED2) 	= 1;
//	}
//}

	void stopMoving()
{
		motor[armL] = 0;
		motor[armR] = 0;
		motor[clawMotor] = 0;
		motor[driveL1] = motor[driveL2] = 0;
		motor[driveR1] = motor[driveR2] = 0;
		motor[mobileL] = 0;
		motor[mobileR] = 0;
		motor[wristMotor] = 0;
}

void dontForget()
{
	stopMoving();
}

//FUNCTIONS HOORAYE!
