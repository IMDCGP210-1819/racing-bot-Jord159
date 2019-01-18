#pragma once
#include "Behaviour.h"
#include <cmath>
class Condition :
	public Behaviour
{
protected:
	std::string var;
	double condd = NULL;
	int condi = NULL;
	bool condb = NULL;
	bool abs = false;
	Behaviour* action;
	Behaviour* altAction = NULL;
public:
	Condition(std::string _var, double _cond, Behaviour* _action, bool _abs = false) : var(_var), condd(_cond), action(_action), abs(_abs) {}
	Condition(std::string _var, int _cond, Behaviour* _action, bool _abs = false) : var(_var), condi(_cond), action(_action), abs(_abs) {}
	Condition(std::string _var, bool _cond, Behaviour* _action) : var(_var), condb(_cond), action(_action) {}
	Condition(std::string _var, double _cond, Behaviour* _action, Behaviour* _altAction, bool _abs = false) : var(_var), condd(_cond), action(_action), altAction(_altAction), abs(_abs) {}
	Condition(std::string _var, int _cond, Behaviour* _action, Behaviour* _altAction, bool _abs = false) : var(_var), condi(_cond), action(_action), altAction(_altAction), abs(_abs) {}
	Condition(std::string _var, bool _cond, Behaviour* _action, Behaviour* _altAction) : var(_var), condb(_cond), action(_action), altAction(_altAction) {}
	void onInit();
	Status update();
	~Condition();
private:
	Status currentStatus;
};

