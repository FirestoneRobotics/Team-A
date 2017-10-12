#define drive motor[driveL] = motor[driveR]

#define driveForward motor[driveL] = motor[driveR] = 127

#define driveBackHalfSpeed motor[driveL] = motor[driveR] = -75

#define driveHalfSpeed motor[driveL] = motor[driveR] = 75

#define driveBack motor[driveL] = motor[driveR] = -127

#define stopDriving motor[driveL] = motor[driveR] = 0

#define clearSensors SensorValue[driveSensor] = 0

#define armMotors motor[armL] = motor[armR]

#define claw motor[clawL] = motor[clawR]

#define wrist motor[wristL] = motor[wristR]

#define mobileGoal motor[mobileL] = motor[mobileR]

#define liamIsBad true

int battLevel = nImmediateBatteryLevel/1000;
