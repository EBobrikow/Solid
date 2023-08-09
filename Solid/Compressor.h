#pragma once
#include "IAirSystem.h"
class Compressor : public IAirSystem
{
public:
	Compressor();
	virtual ~Compressor();

	virtual float GetAirIncome() override;

private:
	float AirIncome;
};

