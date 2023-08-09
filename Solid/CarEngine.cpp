#include "CarEngine.h"
#include<cstdio>
#include<iostream>
#include<ctime>

using namespace std;

BadCarEngine::BadCarEngine()
	: AirIncome(10.0f)
	, FuelConsumption(1.5f)
	, RemainFuelCapacity(20.0f)
{
}

BadCarEngine::~BadCarEngine()
{
}

void BadCarEngine::Start()
{
	while (1)
	{
		// emulate engine work, do work every second
		int delay = 1;
		delay *= CLOCKS_PER_SEC;
		clock_t now = clock();
		while (clock() - now < delay);
		float torque = GetTorque();
		if (torque == 0.0f)
		{
			cout << "Engine shotdown" << endl;
			return;
		}
		else
		{
			cout << "Engine torque = " << torque << endl;
		}
	}

}

float BadCarEngine::GetTorque()
{
	return ConsumeFuel() * GetAirIncome();
}

float BadCarEngine::GetAirIncome() const
{
	return AirIncome;
}

float BadCarEngine::ConsumeFuel()
{
	if (RemainFuelCapacity > 0.0f)
	{
		RemainFuelCapacity -= FuelConsumption;
		return FuelConsumption;
	}
	return 0.0f;
}

FineCarEngine::FineCarEngine()
	: FineCarEngine(nullptr, nullptr)
{
}

FineCarEngine::FineCarEngine(IFuelSystem* fuelSystem, IAirSystem* airSystem)
	: FuelSystem(fuelSystem)
	, AirSystem(airSystem)
{
}

FineCarEngine::~FineCarEngine()
{
}

float FineCarEngine::GetTorque()
{
	if (FuelSystem != nullptr && AirSystem != nullptr)
	{
		return FuelSystem->ConsumeFuel() * AirSystem->GetAirIncome();
	}
	return 0.0f;
}

void FineCarEngine::Start()
{
	while (1)
	{
		// emulate engine work, do work every second
		int delay = 1;
		delay *= CLOCKS_PER_SEC;
		clock_t now = clock();
		while (clock() - now < delay);
		float torque = GetTorque();
		if (torque == 0.0f)
		{
			cout << "Engine shotdown" << endl;
			return;
		}
		else
		{
			cout << "Engine torque = " << torque << endl;
		}
	}
}
