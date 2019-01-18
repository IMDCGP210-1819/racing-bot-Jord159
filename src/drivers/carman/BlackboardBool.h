#pragma once
#include "BlackboardBase.h"
class BlackboardBool :
	public BlackboardBase
{
public:
	BlackboardBool(bool val) : value(val) {};
	bool GetValue() { return value; }
	void SetValue(bool val) { value = val; }
	~BlackboardBool() {}
private:
	bool value;
};

