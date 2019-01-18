#include "Steer.h"



void Steer::onInit()
{
	if (Blackboard::blackboard.count("car") > 0)
	{
		car = Blackboard::GetCar("car");
	}
	if (Blackboard::blackboard.count("steer") == 0)
	{
		Blackboard::insert("steer", new BlackboardDouble(0.0));
	}
	currentStatus = BH_RUNNING;
}

Behaviour::Status Steer::update()
{  //steering code from torcs tutorial chapter 1.3 http://www.berniw.org/tutorials/robot/tutorial.html
	double angle;
	angle = RtTrackSideTgAngleL(&(car->_trkPos)) - car->_yaw;
	NORM_PI_PI(angle);
	angle -= car->_trkPos.toMiddle / car->_trkPos.seg->width;
	double steer = angle / car->_steerLock;
	car->ctrl.steer = steer;
	Blackboard::SetValue("steer", steer);
	currentStatus = BH_PASS;
	return currentStatus;
}

Steer::~Steer()
{
}
