#include "DirectInjection.h"

DirectInjection::DirectInjection()
	: FuelConsumption(2.5f)
	, RemainFuelCapacity(30.0f)
{
}

DirectInjection::~DirectInjection()
{
}

float DirectInjection::ConsumeFuel()
{
	if (RemainFuelCapacity > 0.0f)
	{
		RemainFuelCapacity -= FuelConsumption;
		return FuelConsumption;
	}
    return 0.0f;
}
