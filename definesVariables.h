#define drive motor[driveL] = motor[driveR]

//#define driveForward motor[rightB] = motor[leftB] = motor[rightF] = motor[leftF] = 127

//#define driveHalfSpeed motor[rightB] = motor[leftB] = motor[rightF] = motor[leftF] = 60

//#define driveBack motor[rightB] = motor[leftB] = motor[rightF] = motor[leftF] = -127

//#define driveBackHalfSpeed motor[rightB] = motor[leftB] = motor[rightF] = motor[leftF] = -60

//#define stopDriving motor[rightB] = motor[leftB] = motor[rightF] = motor[leftF] = 0

#define clearSensors SensorValue[driveSensor] = 0

#define armMotors motor[armL] = motor[armR]

#define claw motor[clawL] = motor[clawR]

#define wrist motor[wristL] = motor[wristR]

#define mobileGoal motor[mobileL] = motor[mobileR]

#define liamIsBad true

int battLevel = nImmediateBatteryLevel/1000;
