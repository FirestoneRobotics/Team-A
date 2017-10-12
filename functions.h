 void joystickControl()
{
	motor[driveR] 	= vexRT[Ch2];
	motor[driveL] 	= vexRT[Ch3];
}

void armCanMove()
{
	if(vexRT[Btn5U] == 1)
	{
		armMotors = 127;
	}

	else if(vexRT[Btn5D] == 1)
	{
		armMotors = -172;
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
		claw = 127;
	}

	else if(vexRT[Btn8D] == 1)
	{
		claw = -127;
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
		mobileGoal = 127;
	}

	else if(vexRT[Btn7D] == 1)
	{
		mobileGoal = -127;
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
	motor[driveL] = motor[driveR] = 127;
	SensorValue(driveSensor) = 0;
}


void driveDist(int dist)
{
	while(SensorValue[driveSensor] < dist)
	{
		driveHalfSpeed;
	}

	stopDrivingClearSensor();

	delay(250);

}

void turnL(int dist)
{
	while(SensorValue[driveSensor] < dist)
	{
		motor[driveL] = -75;
		motor[driveR] =  75;
	}

	stopDrivingClearSensor();

	delay(250);

}

void turnR(int dist)
{
	while(SensorValue[driveSensor] > -dist)
	{
		motor[driveL] = 75;
		motor[driveR] = -75;
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

void batteryLED()
{
	if(nImmediateBatteryLevel > 8000)
	{
		SensorValue(greenLED1) = SensorValue(greenLED2) = 1;
		SensorValue(redLED1) 	 = SensorValue(redLED2) 	= 0;
	}

	else
	{
		SensorValue(greenLED1) = SensorValue(greenLED2) = 0;
		SensorValue(redLED1) 	 = SensorValue(redLED2) 	= 1;
	}
}



//FUNCTIONS HOORAYE!
