#pragma once
#include "BlackboardBase.h"
#include "car.h"
class BlackboardCar :
	public BlackboardBase
{
public:
	BlackboardCar(tCarElt *val) : value(val) {};
	tCarElt* GetValue() { return value; }
	void SetValue(tCarElt *val) { value = val; }
	~BlackboardCar() {}
private:
	tCarElt* value;
};

