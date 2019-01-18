#include "Condition.h"



void Condition::onInit()
{
	if (Blackboard::blackboard.count(var) == 0)
	{
		if (condd != NULL)
			Blackboard::insert(var, new BlackboardDouble(0.0));
		else if (condi != NULL)
			Blackboard::insert(var, new BlackboardInt(0));
		else if (condb != NULL)
			Blackboard::insert(var, new BlackboardBool(false));
		currentStatus = BH_RUNNING;
	}
}

Behaviour::Status Condition::update()
{
	if (condd != NULL)
	{
		double cond;
		if (abs)
			cond = std::abs(Blackboard::GetDouble(var));
		else
			cond = Blackboard::GetDouble(var);
		if (cond > condd)
			action->tick();
		else if (altAction != NULL)
			altAction->tick();
	}
	else if (condi != NULL)
	{
		int cond;
		if (abs)
			cond = std::abs(Blackboard::GetInt(var));
		else
			cond = Blackboard::GetInt(var);
		if (cond > condi)
			action->tick();
		else if (altAction != NULL)
			altAction->tick();	
	}
	else if (condb != NULL)
	{
		if (Blackboard::GetBool(var) == condb)
			action->tick();
		else if (altAction != NULL)
			altAction->tick();
	}
	return Status();
}

Condition::~Condition()
{
}
