#include "Sequence.h"



Sequence::Sequence()
{
}

Behaviour::Status Sequence::update()
{
	while (true)
	{
		currentStatus = (*currentChild)->tick();
		if (currentStatus != BH_PASS)
			return currentStatus;
		if (++currentChild == children.end())
			return BH_PASS;
	}
	return BH_INVALID;
}


Sequence::~Sequence()
{
}
