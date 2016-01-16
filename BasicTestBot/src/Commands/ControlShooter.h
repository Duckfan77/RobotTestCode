#ifndef CONTROL_SHOOTER_H
#define CONTROL_SHOOTER_H

#include "../CommandBase.h"
#include "WPILib.h"

class ControlShooter: public CommandBase
{
public:
	ControlShooter();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif
