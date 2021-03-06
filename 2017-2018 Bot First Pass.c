#pragma config(Sensor, dgtl1,  driveRightSensor, sensorQuadEncoder)
#pragma config(Sensor, dgtl3,  armSensor,      sensorQuadEncoder)
#pragma config(Sensor, dgtl5,  driveSensor,    sensorQuadEncoder)
#pragma config(Sensor, dgtl9,  redLED1,        sensorLEDtoVCC)
#pragma config(Sensor, dgtl10, redLED2,        sensorLEDtoVCC)
#pragma config(Sensor, dgtl11, greenLED1,      sensorLEDtoVCC)
#pragma config(Sensor, dgtl12, greenLED2,      sensorLEDtoVCC)
#pragma config(Motor,  port1,           mobileL,       tmotorVex393_HBridge, openLoop, reversed)
#pragma config(Motor,  port2,           driveR2,       tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port3,           driveR1,       tmotorVex393_MC29, openLoop, reversed)
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
	stopDrivingClearSensor();

	while(SensorValue(driveSensor) < 1500)
	{

		wrist = 100;

		motor[mobileL] = 100;
		motor[mobileR] = 100;

		drive = 120;

	}
	stopDrivingClearSensor();

	motor[mobileL] = -127;
	motor[mobileR] = -127;

	delay(1450);

	stopMoving();

	while(sensorValue(driveSensor) < 500)
	{
		drive = -120;
	}
	stopDrivingClearSensor()
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
