#pragma once
#include "Behaviour.h"
#include "Accel.h"
#include "Accel30.h"
#include "Condition.h"
#include "Sequence.h"
#include "Steer.h"
class Tree :
	public Behaviour
{
public:
	void onInit();
	Status update();
	~Tree();
private:
	Status currentStatus;

	Accel* accel;
	Accel30* accel30;
	Condition* condAccel = new Condition("steer", 0.1, accel30, accel, true);
	Steer* steer;
	Sequence* sequence;
};

