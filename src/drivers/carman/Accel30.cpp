#include "Accel30.h"



void Accel30::onInit()
{
	if (Blackboard::blackboard.count("car") > 0)
	{
		car = Blackboard::GetCar("car");
	}
	if (Blackboard::blackboard.count("accel") == 0)
	{
		Blackboard::insert("accel", new BlackboardDouble(0.3));
	}
	if (Blackboard::blackboard.count("brake") == 0)
	{
		Blackboard::insert("brake", new BlackboardDouble(0.0));
	}
	currentStatus = BH_RUNNING;
}

Behaviour::Status Accel30::update()
{
	double accel = 0.3;
	car->ctrl.accelCmd = accel;
	Blackboard::SetValue("accel", accel);
	double brake = 0.0;
	car->ctrl.brakeCmd = brake;
	Blackboard::SetValue("brake", brake);
	currentStatus = BH_PASS;
	return currentStatus;
}

Accel30::~Accel30()
{
}
