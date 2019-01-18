#pragma once
#include "BlackboardBase.h"
class BlackboardDouble :
	public BlackboardBase
{
public:
	BlackboardDouble(double val) : value(val) {};
	double GetValue() { return value; }
	void SetValue(double val) { value = val; }
	~BlackboardDouble() {}
private:
	double value;
};

