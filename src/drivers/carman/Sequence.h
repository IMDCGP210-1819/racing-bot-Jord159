#pragma once
#include "Composite.h"
class Sequence :
	public Composite
{
public:
	Sequence();
	Status update();
	~Sequence();
private:
	Status currentStatus;
};

