#pragma once
#include "Behaviour.h"
class Accel :
	public Behaviour ///Max acceleration, no braking
{
public:
	Accel() : currentStatus(BH_INVALID) {}
	void onInit();
	Status update();
	~Accel();
private:
	Status currentStatus;
	tCarElt* car;
};

