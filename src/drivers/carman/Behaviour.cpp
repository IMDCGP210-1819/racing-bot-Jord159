#include "Behaviour.h"



Behaviour::Status Behaviour::tick()
{
	if (currentStatus == BH_INVALID) onInit();

	currentStatus = update();

	if (currentStatus != BH_RUNNING) onTerminate(currentStatus);

	return currentStatus;
}
