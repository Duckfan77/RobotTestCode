#include "ExampleSubsystem.h"
#include "../RobotMap.h"

ExampleSubsystem::ExampleSubsystem()
		: Subsystem("ExampleSubsystem")
{
	m_drive = new RobotDrive(LEFTMOTOR,RIGHTMOTOR);
}

void ExampleSubsystem::InitDefaultCommand()
{
	// Set the default command for a subsystem here.
	//SetDefaultCommand(new MySpecialCommand());
}

// Put methods for controlling this subsystem
// here. Call these from Commands.

void ExampleSubsystem::Drive(float leftSpeed, float rightSpeed)
{
	m_drive->TankDrive(leftSpeed, rightSpeed);
}
