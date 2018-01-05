void auton10PointRed()
{
		stopDrivingClearSensor(); 																	//RED



	while(SensorValue(driveLeftSensor) < 1400)
	{

	wrist = 127;

	motor[mobileL] = 127;
	motor[mobileR] = 127;

	drive = 127;

	}
	stopDrivingClearSensor();

	motor[mobileL] = -127;
	motor[mobileR] = -127;

	delay(1450);

	claw = -127;
	delay(500);

	stopMoving();

	motor(clawR) = 127;

	stopDrivingClearSensor();


	while(SensorValue(driveLeftSensor) > -1350)
	{
	drive = -127;
	}

	stopDrivingClearSensor();
	stopDrivingClearSensor();

	turnR(800);

	while(SensorValue(driveLeftSensor) < 100)
	{
	drive = 127;
	}

	motor[mobileL]= motor[mobileR] = 127;
	delay(1000);

	while(SensorValue(driveLeftSensor) > -100)
	{
	drive = -127;
	motor[mobileL]= motor[mobileR] = 0;
	}

	while(SensorValue(driveLeftSensor) > -550)
	{
	drive = -127;
	motor[mobileL]= motor[mobileR] = -127;
	}

	stopMoving();



	stopDrivingClearSensor();

}

void auton10PointBlue()
{
		while(SensorValue(driveLeftSensor) < 1400) 									//BLUE
	{

	wrist = 127;

	motor[mobileL] = 100;
	motor[mobileR] = 100;

	drive = 120;

	}
	stopDrivingClearSensor();

	motor[mobileL] = -127;
	motor[mobileR] = -127;

	delay(1450);

	claw = -127;
	delay(500);

	stopMoving();

	motor(clawR) = 127;

	stopDrivingClearSensor();


	while(SensorValue(driveLeftSensor) > -1350)
	{
	drive = -127;
	}

	stopDrivingClearSensor();
	stopDrivingClearSensor();

	turnL(750);

	while(SensorValue(driveLeftSensor) < 100)
	{
	drive = 127;
	}

	motor[mobileL]= motor[mobileR] = 127;
	delay(1000);

	while(SensorValue(driveLeftSensor) > -100)
	{
	drive = -127;
	motor[mobileL]= motor[mobileR] = 0;
	}

	while(SensorValue(driveLeftSensor) > -550)
	{
	drive = -127;
	motor[mobileL]= motor[mobileR] = -127;
	}

	stopMoving();
}

void auton2point()
{
		stopDrivingClearSensor();										//TWO PT, WHILE OTHER TEAM 20'S

	while(sensorValue(driveLeftSensor) < 800)
	{
		motor[wristL] = motor[wristR] = 127;
		motor[armL] = motor[armR] = 127;
		drive = 69;
	}

	stopDrivingClearSensor();

	motor[armL] = motor[armR] = -127;
	delay(750);

	moveClaw(-127);
	delay(200);

	while(sensorValue(driveLeftSensor) > -550)
	{
		drive = -100;
	}

	stopDrivingClearSensor();

	turnL(360);

	while(sensorValue(driveLeftSensor) < 700)
	{
		drive = 100;
		motor(mobileL) = motor(mobileR) = 127
	}

	stopDrivingClearSensor();

	while(sensorValue(driveLeftSensor) < 700)
	{
		drive = 100;
	}

	stopDrivingClearSensor();

	motor(mobileL) = -127;
	motor(mobileR) = -127;
	delay(2000);

}

void autonskills()
{

}
