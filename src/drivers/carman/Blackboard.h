#pragma once
#include <map>
#include <string>
#include "BlackboardBase.h"
#include "BlackboardBool.h"
#include "BlackboardInt.h"
#include "BlackboardDouble.h"
#include "BlackboardCar.h"
class Blackboard
{
public:
	Blackboard();
	static std::map<const std::string, BlackboardBase*> blackboard;

	static void insert(std::string key, BlackboardBool* val);
	static void insert(std::string key, BlackboardInt* val);
	static void insert(std::string key, BlackboardDouble* val);
	static void insert(std::string key, BlackboardCar* val);

	static bool GetBool(std::string key);
	static int GetInt(std::string key);
	static double GetDouble(std::string key);
	static tCarElt* GetCar(std::string key);

	static void SetValue(std::string key, bool val);
	static void SetValue(std::string key, int val);
	static void SetValue(std::string key, double val);
	static void SetValue(std::string key, tCarElt* val);
	~Blackboard();
};

