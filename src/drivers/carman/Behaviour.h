#pragma once
#include "Blackboard.h"
#include "robottools.h"
class Behaviour
{
protected: 
	enum Status
	{
		BH_INVALID,
		BH_PASS,
		BH_FAIL,
		BH_RUNNING,
		BH_ERROR
	};
	virtual void onInit() {}
	virtual Status update() = 0;
	virtual void onTerminate(Status) {}
private:
	Status currentStatus;
public:
	Behaviour() : currentStatus(BH_INVALID) {}
	virtual Status tick();
	virtual ~Behaviour() {}
};

