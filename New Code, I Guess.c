#pragma config(Sensor, dgtl1,  driveRightSensor, sensorQuadEncoder)
#pragma config(Sensor, dgtl3,  armSensor,      sensorQuadEncoder)
#pragma config(Sensor, dgtl5,  driveSensor,    sensorQuadEncoder)
#pragma config(Sensor, dgtl5,  driveLeftSensor, sensorQuadEncoder)
#pragma config(Sensor, dgtl7,  greenLED1,      sensorLEDtoVCC)
#pragma config(Sensor, dgtl8,  greenLED2,      sensorLEDtoVCC)
#pragma config(Sensor, dgtl9,  redLED1,        sensorLEDtoVCC)
#pragma config(Sensor, dgtl10, redLED2,        sensorLEDtoVCC)
#pragma config(Sensor, dgtl11, greenLED1,      sensorLEDtoVCC)
#pragma config(Sensor, dgtl12, greenLED2,      sensorLEDtoVCC)
#pragma config(Motor,  port1,           mobileL,       tmotorVex393_HBridge, openLoop, reversed)
#pragma config(Motor,  port2,           driveL,        tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port3,           driveR,        tmotorVex393_MC29, openLoop, reversed)
#pragma config(Motor,  port4,           armL,          tmotorVex393_MC29, openLoop, reversed)
#pragma config(Motor,  port5,           armR,          tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port6,           wristL,        tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port7,           wristR,        tmotorVex393_MC29, openLoop, reversed)
#pragma config(Motor,  port8,           clawL,         tmotorVex269_MC29, openLoop, reversed)
#pragma config(Motor,  port9,           clawR,         tmotorVex269_MC29, openLoop, reversed)
#pragma config(Motor,  port10,          mobileR,       tmotorVex393_HBridge, openLoop)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

#pragma platform(VEX2)
#pragma competitionControl(Competition)
#include "Vex_Competition_Includes.c"
#include "definesVariables.h"
#include "functions.h"


void pre_auton()
{

	bStopTasksBetweenModes = true;

}



task autonomous()
{
	/*
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
	*/

	stopDrivingClearSensor();										//TWO PT, WHILE OTHER TEAM 20'S

	while(sensorValue(driveLeftSensor) < 550)
	{
		motor[wristL] = motor[wristR] = 127;
		motor[armL] = motor[armR] = 127;
		drive = 69;
	}

	stopDrivingClearSensor();

	motor[armL] = motor[armR] = -127;
	delay(500);

	moveClaw(-127);
	delay(200);

	while(sensorValue(driveLeftSensor) > -275)
	{
		drive = -63;
	}

	stopDrivingClearSensor();

	turnL(175);

		while(sensorValue(driveLeftSensor) < 1600)
	{
		drive = 100;
	}

	stopDrivingClearSensor();



}

task usercontrol()
{

	while(true)
	{

		joystickControl();

		armCanMove();

		clawCanMove();

		wristCanMove();

		mobileGoalLifter();

		batteryLCDScreen();

		batteryLED();

	}
}
