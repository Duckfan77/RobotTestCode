#include "OI.h"

OI::OI()
{
	// Process operator interface input here.
	leftStick = new Joystick(0);
	rightStick = new Joystick(1);
	gamepad = new Joystick(2);
}
