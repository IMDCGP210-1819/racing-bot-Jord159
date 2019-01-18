#pragma once
#include "Behaviour.h"
class Accel30 :
	public Behaviour ///30% accel, no braking. Based off values in torcs tutorial chapter 1.3 http://www.berniw.org/tutorials/robot/tutorial.html
{
public:
	Accel30() : currentStatus(BH_INVALID) {}
	void onInit();
	Status update();
	~Accel30();
private:
	Status currentStatus;
	tCarElt* car;
};

