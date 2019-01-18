#pragma once
#include "Behaviour.h"
#include <vector>
class Composite :
	public Behaviour
{
public:
	Composite();
	void addChild(Behaviour*);
	void removeChild(Behaviour*);
	void clearChildren();
	void onInit();
	~Composite();
protected:
	typedef std::vector<Behaviour*> Behaviours;
	Behaviours children;
	Behaviours::iterator currentChild;
private:
	Status currentStatus;
};

