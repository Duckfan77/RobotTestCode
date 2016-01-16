#include "ControlShooter.h"

ControlShooter::ControlShooter()
{
	// Use Requires() here to declare subsystem dependencies
	Requires(shooter.get());
}

// Called just before this Command runs the first time
void ControlShooter::Initialize()
{

}

// Called repeatedly when this Command is scheduled to run
void ControlShooter::Execute()
{
	shooter->Shoot(CommandBase::oi->leftStick->GetRawButton(1));
}

// Make this return true when this Command no longer needs to run execute()
bool ControlShooter::IsFinished()
{
	return false;
}

// Called once after isFinished returns true
void ControlShooter::End()
{

}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void ControlShooter::Interrupted()
{

}
