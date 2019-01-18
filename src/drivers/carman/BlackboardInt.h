#pragma once
#include "BlackboardBase.h"
class BlackboardInt :
	public BlackboardBase
{
public:
	BlackboardInt(int val) : value(val) {};
	int GetValue() { return value; }
	void SetValue(int val) { value = val; }
	~BlackboardInt() {}
private:
	int value;
};