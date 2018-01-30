#define drive motor[driveL1] = motor[driveR1] = motor[driveR2] = motor[driveL2]

#define driveForward motor[driveL1] = motor[driveR1] = motor[driveL2] = motor[driveR2] = 127

#define driveBackHalfSpeed motor[driveL1] = motor[driveR1] = motor[driveL2] = motor[driveR2] = -69

#define driveHalfSpeed motor[driveL1] = motor[driveR1] = motor[driveL2] = motor[driveR2] = 75

#define driveBack  motor[driveL1] = motor[driveR1] = motor[driveL2] = motor[driveR2] = -127

#define stopDriving  motor[driveL1] = motor[driveR1] = motor[driveL2] = motor[driveR2] = 0

#define clearSensors SensorValue[driveSensor] = 0

#define armMotors motor[armL] = motor[armR]

#define claw motor[clawMotor]

#define wrist motor[wristMotor]

#define mobileGoal motor[mobileL] = motor[mobileR]

#define liamIsBad true

int battLevel = nImmediateBatteryLevel/1000;
