#pragma once
#include "IAirSystem.h"
class TwinTurbo : public IAirSystem
{
public:
	TwinTurbo();
	virtual ~TwinTurbo();

	virtual float GetAirIncome() override;

private:
	float AirIncome;
};

