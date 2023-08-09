#pragma once
#include "IFuelSystem.h"
class DirectInjection : public IFuelSystem
{
public:
	DirectInjection();
	virtual ~DirectInjection();

	virtual float ConsumeFuel() override;

private:
	float FuelConsumption;
	float RemainFuelCapacity;
};

