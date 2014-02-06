#ifndef Chassis_h
#define Chassis_h

#include <WPILib.h>

class Chassis: public Subsystem {
	public:
		Chassis();
		~Chassis();
		void InitDefaultCommand();
		void drive(double vX, double vY, double vR, double throttle);
		

		
	private:
		Victor* driveMotorA;
		Victor* driveMotorB;
		Victor* driveMotorC;
		Victor* driveMotorD;
		PIDController* pidA;
		PIDController* pidB;
		PIDController* pidC;
		PIDController* pidD;
		Encoder *encoderA, *encoderB, *encoderC, *encoderD;
};

#endif
