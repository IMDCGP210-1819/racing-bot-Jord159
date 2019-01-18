#include "Tree.h"



void Tree::onInit()
{
	sequence->addChild(steer);
	sequence->addChild(condAccel);
}

Behaviour::Status Tree::update()
{
	currentStatus = sequence->tick();
	return currentStatus;
}

Tree::~Tree()
{
}
