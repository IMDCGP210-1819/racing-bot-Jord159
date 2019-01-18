#include "Blackboard.h"



Blackboard::Blackboard()
{
}

std::map<const std::string, BlackboardBase*> Blackboard::blackboard;

void Blackboard::insert(std::string key, BlackboardBool* val)
{
	blackboard.insert(std::pair<std::string, BlackboardBase*>(key, val));
}

void Blackboard::insert(std::string key, BlackboardInt* val)
{
	blackboard.insert(std::pair<std::string, BlackboardBase*>(key, val));
}

void Blackboard::insert(std::string key, BlackboardDouble* val)
{
	blackboard.insert(std::pair<std::string, BlackboardBase*>(key, val));
}

void Blackboard::insert(std::string key, BlackboardCar* val)
{
	blackboard.insert(std::pair<std::string, BlackboardBase*>(key, val));
}

bool Blackboard::GetBool(std::string key)
{
	BlackboardBase* val = blackboard.at(key);
	BlackboardBool* v = dynamic_cast<BlackboardBool*>(val);
	bool value = v->GetValue();
	return value;
}

int Blackboard::GetInt(std::string key)
{
	BlackboardBase* val = blackboard.at(key);
	BlackboardInt* v = dynamic_cast<BlackboardInt*>(val);
	int value = v->GetValue();
	return value;
}

double Blackboard::GetDouble(std::string key)
{
	BlackboardBase* val = blackboard.at(key);
	BlackboardDouble* v = dynamic_cast<BlackboardDouble*>(val);
	double value = v->GetValue();
	return value;
}

tCarElt * Blackboard::GetCar(std::string key)
{
	BlackboardBase* val = blackboard.at(key);
	BlackboardCar* v = dynamic_cast<BlackboardCar*>(val);
	tCarElt* value = v->GetValue();
	return value;
}

void Blackboard::SetValue(std::string key, bool val)
{
	BlackboardBase* base = blackboard.at(key);
	BlackboardBool* _bool = dynamic_cast<BlackboardBool*>(base);
	_bool->SetValue(val);
}

void Blackboard::SetValue(std::string key, int val)
{
	BlackboardBase* base = blackboard.at(key);
	BlackboardInt* _int = dynamic_cast<BlackboardInt*>(base);
	_int->SetValue(val);
}

void Blackboard::SetValue(std::string key, double val)
{
	BlackboardBase* base = blackboard.at(key);
	BlackboardDouble* _double = dynamic_cast<BlackboardDouble*>(base);
	_double->SetValue(val);
}

void Blackboard::SetValue(std::string key, tCarElt* val)
{
	BlackboardBase* base = blackboard.at(key);
	BlackboardCar* _tCarElt = dynamic_cast<BlackboardCar*>(base);
	_tCarElt->SetValue(val);
}

Blackboard::~Blackboard()
{
}