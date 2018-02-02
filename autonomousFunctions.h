void auton10PointRed()
{
	stopDrivingClearSensor(); 																	//RED



	while(SensorValue(driveSensor) < 1400)
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

	motor(clawMotor) = 127;

	stopDrivingClearSensor();


	while(SensorValue(driveSensor) > -1350)
	{
		drive = -127;
	}

	stopDrivingClearSensor();

	turnL(800);

	while(SensorValue(driveSensor) < 100)
	{
		drive = 127;
	}

	motor[mobileL]= motor[mobileR] = 127;
	delay(1000);

	while(SensorValue(driveSensor) > -100)
	{
		drive = -127;
		motor[mobileL]= motor[mobileR] = 0;
	}

	while(SensorValue(driveSensor) > -550)
	{
		drive = -127;
		motor[mobileL]= motor[mobileR] = -127;
	}

	stopMoving();



	stopDrivingClearSensor();

}

void auton10PointBlue()
{

	stopDrivingClearSensor();
	while(SensorValue(driveSensor) < 1400) 									//BLUE
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

	motor(clawMotor) = 127;

	stopDrivingClearSensor();


	while(SensorValue(driveSensor) > -1350)
	{
		drive = -127;
	}

	stopDrivingClearSensor();
	stopDrivingClearSensor();

	turnL(650);

	while(SensorValue(driveSensor) < 100)
	{
		drive = 127;
	}

	motor[mobileL]= motor[mobileR] = 127;
	delay(1000);

	while(SensorValue(driveSensor) > -100)
	{
		drive = -127;
		motor[mobileL]= motor[mobileR] = 0;
	}

	while(SensorValue(driveSensor) > -550)
	{
		drive = -127;
		motor[mobileL]= motor[mobileR] = -127;
	}

	stopMoving();
}

void auton2point()
{
	stopDrivingClearSensor();										//TWO PT, WHILE OTHER TEAM 20'S

	while(SensorValue(driveSensor) < 800)
	{
		motor[wristMotor] = 127;
		motor[armL] = motor[armR] = 127;
		drive = 69;
	}

	stopDrivingClearSensor();

	motor[armL] = motor[armR] = -127;
	delay(1000);

	moveClaw(-127);
	delay(250);

	while(SensorValue(driveSensor) > -550)
	{
		drive = -100;
	}

	stopDrivingClearSensor();

	turnL(360);

	while(SensorValue(driveSensor) < 700)
	{
		drive = 100;
		motor(mobileL) = motor(mobileR) = 127;
	}

	stopDrivingClearSensor();

	while(SensorValue(driveSensor) < 700)
	{
		drive = 100;
	}

	stopDrivingClearSensor();

	motor(mobileL) = -127;
	motor(mobileR) = -127;
	delay(2000);

}

void blue20point()
{
	while(SensorValue(driveSensor) < 1400) 									//BLUE
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

	motor(clawMotor) = 127;

	stopDrivingClearSensor();


	while(SensorValue(driveSensor) > -1350)
	{
		drive = -127;
	}

	stopDrivingClearSensor();
	stopDrivingClearSensor();

	turnL(750);

	while(SensorValue(driveSensor) < 1000)
	{
		drive = 127;
	}

	motor[mobileL]= motor[mobileR] = 127;
	delay(1000);

	while(SensorValue(driveSensor) > -300)
	{
		drive = -127;
		motor[mobileL]= motor[mobileR] = 0;
	}

	while(SensorValue(driveSensor) > -550)
	{
		drive = -127;
		motor[mobileL]= motor[mobileR] = -127;
	}

	stopMoving();
}

void autonSkills()
{


	stopDrivingClearSensor();

	claw = 127;
	delay(500);

	mobileGoal = 127;
	delay(1000);
	mobileGoal = 0;


	while(SensorValue(driveSensor) < 190)
	{
		wrist = 0;
		mobileGoal = 0;
		drive = 127;
	}

	stopDrivingClearSensor();

	//while(SensorValue(driveSensor) < 1000)
	//{
	//	wrist = 20;
	//	mobileGoal = 0;
	//	drive = 69;
	//}

	//wrist = 0;
	//mobileGoal = 0;

	//stopDrivingClearSensor();
	//delay(250);

	//mobileGoal = -127;
	//delay(750);

	//claw = -127;
	//mobileGoal = 0;
	//delay(500);
	//claw = 0;

	//while(SensorValue[driveSensor] > -550)
	//{
	//	wrist = 500;
	//	mobileGoal = -127;
	//	drive = -69;
	//}
	//stopDrivingClearSensor();
	//mobileGoal = 0;
	//delay(1000);

	//turnL(400);

	//while(SensorValue[driveSensor] < 350)
	//{
	//	drive = 69;
	//}

	//stopDrivingClearSensor();
	//delay(500);
	//stopDrivingClearSensor();

	//turnL(330);

	//	while(SensorValue[driveSensor] < 500)
	//{
	//	drive = 127;
	//}

	//while(SensorValue[driveSensor] < 600)
	//{
	//	drive = 127;
	//	mobileGoal = 127;
	//}

	//stopDrivingClearSensor();

	////motor[mobileL] = motor[mobileR] = 127;
	////delay(2000);
	////motor[mobileL] = motor[mobileR] = 0;

	//		while(SensorValue[driveSensor] > -150)
	//{
	//	drive = -127;
	//	mobileGoal = 0;
	//}

	//	while(SensorValue[driveSensor] > -500)
	//{
	//	drive = -127;
	//	mobileGoal = -127;
	//}

	//stopDrivingClearSensor();

}




























void archiveOfWorking20PointAutonSkills()
{


	stopDrivingClearSensor();

	while(SensorValue(driveSensor) < 200)
	{
		wrist = 127;
		mobileGoal = 127;
		drive = 69;
	}

	while(SensorValue(driveSensor) < 1000)
	{
		wrist = 20;
		mobileGoal = 0;
		drive = 69;
	}

	wrist = 0;
	mobileGoal = 0;

	stopDrivingClearSensor();
	delay(250);

	mobileGoal = -127;
	delay(750);

	claw = -127;
	mobileGoal = 0
	delay(500);
	claw = 0;

	while(SensorValue[driveSensor] > -550)
	{
		wrist = 500;
		mobileGoal = -127;
		drive = -69;
	}
	stopDrivingClearSensor();
	mobileGoal = 0;
	delay(1000);

	turnL(400);

	while(SensorValue[driveSensor] < 350)
	{
		drive = 69;
	}

	stopDrivingClearSensor();
	delay(500);
	stopDrivingClearSensor();

	turnL(330);

		while(SensorValue[driveSensor] < 500)
	{
		drive = 127;
	}

	while(SensorValue[driveSensor] < 600)
	{
		drive = 127;
		mobileGoal = 127;
	}

	stopDrivingClearSensor();

	//motor[mobileL] = motor[mobileR] = 127;
	//delay(2000);
	//motor[mobileL] = motor[mobileR] = 0;

			while(SensorValue[driveSensor] > -150)
	{
		drive = -127;
		mobileGoal = 0;
	}

		while(SensorValue[driveSensor] > -500)
	{
		drive = -127;
		mobileGoal = -127;
	}

	stopDrivingClearSensor();

}


















/*
stopDrivingClearSensor(); 																	//RED



while(SensorValue(driveSensor) < 1400)
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


while(SensorValue(driveSensor) > -1350)
{
drive = -127;
}

stopDrivingClearSensor();
stopDrivingClearSensor();

turnR(800);

while(SensorValue(driveSensor) < 100)
{
drive = 127;
}

motor[mobileL]= motor[mobileR] = 127;
delay(1000);

while(SensorValue(driveSensor) > -100)
{
drive = -127;
motor[mobileL]= motor[mobileR] = 0;
}

while(SensorValue(driveSensor) > -550)
{
drive = -127;
motor[mobileL]= motor[mobileR] = -127;
}

stopMoving();



stopDrivingClearSensor();



while(SensorValue(driveSensor) < 1400) 									//BLUE
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


while(SensorValue(driveSensor) > -1350)
{
drive = -127;
}

stopDrivingClearSensor();
stopDrivingClearSensor();

turnL(750);

while(SensorValue(driveSensor) < 100)
{
drive = 127;
}

motor[mobileL]= motor[mobileR] = 127;
delay(1000);

while(SensorValue(driveSensor) > -100)
{
drive = -127;
motor[mobileL]= motor[mobileR] = 0;
}

while(SensorValue(driveSensor) > -550)
{
drive = -127;
motor[mobileL]= motor[mobileR] = -127;
}

stopMoving();

*/
//stopDrivingClearSensor();										//TWO PT, WHILE OTHER TEAM 20'S

//while(SensorValue(driveSensor) < 800)
//{
//	motor[wristL] = motor[wristR] = 127;
//	motor[armL] = motor[armR] = 127;
//	drive = 69;
//}

//stopDrivingClearSensor();

//motor[armL] = motor[armR] = -127;
//delay(750);

//moveClaw(-127);
//delay(200);

//while(SensorValue(driveSensor) > -550)
//{
//	drive = -100;
//}

//stopDrivingClearSensor();

//turnL(360);

//while(SensorValue(driveSensor) < 700)
//{
//	drive = 100;
//	motor(mobileL) = motor(mobileR) = 127
//}

//stopDrivingClearSensor();

//while(SensorValue(driveSensor) < 700)
//{
//	drive = 100;
//}

//stopDrivingClearSensor();

//motor(mobileL) = -127;
//motor(mobileR) = -127;
//delay(2000);
