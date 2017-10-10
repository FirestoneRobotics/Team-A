#pragma config(Sensor, dgtl1,  driveSensor,    sensorQuadEncoder)
#pragma config(Sensor, dgtl3,  armSensor,      sensorQuadEncoder)
#pragma config(Sensor, dgtl5,  clawSensor,     sensorQuadEncoder)
#pragma config(Sensor, dgtl7,  greenLED1,      sensorLEDtoVCC)
#pragma config(Sensor, dgtl8,  greenLED2,      sensorLEDtoVCC)
#pragma config(Sensor, dgtl9,  redLED1,        sensorLEDtoVCC)
#pragma config(Sensor, dgtl10, redLED2,        sensorLEDtoVCC)
#pragma config(Motor,  port1,           mobileL,       tmotorVex393_HBridge, openLoop)
#pragma config(Motor,  port2,           driveL,        tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port3,           driveR,        tmotorVex393_MC29, openLoop, reversed)
#pragma config(Motor,  port4,           armL,          tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port5,           armR,          tmotorVex393_MC29, openLoop, reversed)
#pragma config(Motor,  port6,           wristL,        tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port7,           wristR,        tmotorVex393_MC29, openLoop, reversed)
#pragma config(Motor,  port8,           clawL,         tmotorVex269_MC29, openLoop, reversed)
#pragma config(Motor,  port9,           clawR,         tmotorVex269_MC29, openLoop, reversed)
#pragma config(Motor,  port10,          mobileR,       tmotorVex393_HBridge, openLoop, reversed)
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
