#pragma once
#include "Behaviour.h"
class Steer :
	public Behaviour
{
public:
	Steer() : currentStatus(BH_INVALID) {}
	void onInit();
	Status update();
	~Steer();
private:
	Status currentStatus;
	tCarElt* car;
};

