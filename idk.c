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


#pragma platform(VEX2)

#pragma competitionControl(Competition)

#include "Vex_Competition_Includes.c"

/*---------------------------------------------------------------------------*/
/*                          Pre-Autonomous Functions                         */
/*                                                                           */
/*  You may want to perform some actions before the competition starts.      */
/*  Do them in the following function.  You must return from this function   */
/*  or the autonomous and usercontrol tasks will not be started.  This       */
/*  function is only called once after the cortex has been powered on and    */
/*  not every time that the robot is disabled.                               */
/*---------------------------------------------------------------------------*/

void pre_auton()
{
  // Set bStopTasksBetweenModes to false if you want to keep user created tasks
  // running between Autonomous and Driver controlled modes. You will need to
  // manage all user created tasks if set to false.
  bStopTasksBetweenModes = true;

	// Set bDisplayCompetitionStatusOnLcd to false if you don't want the LCD
	// used by the competition include file, for example, you might want
	// to display your team name on the LCD in this function.
	// bDisplayCompetitionStatusOnLcd = false;

  // All activities that occur before the competition starts
  // Example: clearing encoders, setting servo positions, ...
}

/*---------------------------------------------------------------------------*/
/*                                                                           */
/*                              Autonomous Task                              */
/*                                                                           */
/*  This task is used to control your robot during the autonomous phase of   */
/*  a VEX Competition.                                                       */
/*                                                                           */
/*  You must modify the code to add your own robot specific commands here.   */
/*---------------------------------------------------------------------------*/

task autonomous()
{
  // ..........................................................................
  // Insert user code here.
  // ..........................................................................

  // Remove this function call once you have "real" code.
  AutonomousCodePlaceholderForTesting();
}

/*---------------------------------------------------------------------------*/
/*                                                                           */
/*                              User Control Task                            */
/*                                                                           */
/*  This task is used to control your robot during the user control phase of */
/*  a VEX Competition.                                                       */
/*                                                                           */
/*  You must modify the code to add your own robot specific commands here.   */
/*---------------------------------------------------------------------------*/

task usercontrol()
{
  // User control code here, inside the loop

  while (true)
  {
    motor[driveL]= vexRT[Ch3];
    motor[driveR]= vexRT[Ch2];

  }
}
