#include "Composite.h"



Composite::Composite()
{
}

void Composite::addChild(Behaviour* child)
{
	children.push_back(child);
}

void Composite::removeChild(Behaviour* child)
{
	for (int i = 0; i < children.size(); i++) {
		if (children.at(i) == child) {
			children.erase(children.begin() + i);
		}
	}
}

void Composite::clearChildren()
{
	children.clear();
}

void Composite::onInit()
{
	currentChild = children.begin();
}

Composite::~Composite()
{
}
