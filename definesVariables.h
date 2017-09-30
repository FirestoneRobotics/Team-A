#define drive motor[rightB] = motor[leftB] = motor[rightF] = motor[leftF]

#define driveForward motor[rightB] = motor[leftB] = motor[rightF] = motor[leftF] = 127

#define driveHalfSpeed motor[rightB] = motor[leftB] = motor[rightF] = motor[leftF] = 60

#define driveBack motor[rightB] = motor[leftB] = motor[rightF] = motor[leftF] = -127

#define driveBackHalfSpeed motor[rightB] = motor[leftB] = motor[rightF] = motor[leftF] = -60

#define stopDriving motor[rightB] = motor[leftB] = motor[rightF] = motor[leftF] = 0

#define clearSensors SensorValue[driveSensor] = 0

#define armMotors motor[armMotorL] = motor[armMotorR]

#define claw motor[clawMotor]

#define liamIsBad true

int battLevel = nImmediateBatteryLevel/1000;
