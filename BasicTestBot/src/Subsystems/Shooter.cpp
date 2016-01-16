#include "Shooter.h"
#include "../Commands/ControlShooter.h"
#include "../RobotMap.h"

Shooter::Shooter()
		: Subsystem("Shooter")
{
	shooter = new Jaguar(SHOOTERMOTOR);
}

void Shooter::InitDefaultCommand()
{
	// Set the default command for a subsystem here.
	SetDefaultCommand(new ControlShooter());
}

// Put methods for controlling this subsystem
// here. Call these from Commands.

void Shooter::Shoot(float speed)
{
	shooter->Set(speed);
}
