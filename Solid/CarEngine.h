#pragma once
#include "IFuelSystem.h"
#include "IAirSystem.h"
//Bad example of Single responcesibility, a.k. "GodObject"
class BadCarEngine
{
public:

	BadCarEngine();
	virtual ~BadCarEngine();

	void Start();

	float GetTorque();
	float GetAirIncome() const;
	float ConsumeFuel();

private: 

	float AirIncome;
	float FuelConsumption;
	float RemainFuelCapacity;
};

//Example with devided responcebilyties
class FineCarEngine
{
public:

	FineCarEngine();
	FineCarEngine(IFuelSystem* fuelSystem, IAirSystem* airSystem);
	~FineCarEngine();

	float GetTorque();

	void Start();

private:
	IFuelSystem* FuelSystem;
	IAirSystem* AirSystem;
};