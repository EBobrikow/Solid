#include "SimpleSquare.h"

SimpleSquare::SimpleSquare()
	: sideLenth(5)
{
}

SimpleSquare::~SimpleSquare()
{
}

int SimpleSquare::GetSideLenth() const
{
	return sideLenth;
}

void SimpleSquare::SetSideLenth(const int& lenth)
{
	sideLenth = lenth;
}

int SimpleSquare::GetSquareLenth() const
{
	return sideLenth*4;
}

ImpruvedSquare::ImpruvedSquare()
{
}

ImpruvedSquare::~ImpruvedSquare()
{
}

int ImpruvedSquare::GetSquareArea() const
{
	return sideLenth* sideLenth;
}

FinaleSquare::FinaleSquare()
{
}

FinaleSquare::~FinaleSquare()
{
}

float FinaleSquare::GetHypotenuseLenth() const
{
	return sqrt((sideLenth* sideLenth) + (sideLenth * sideLenth));
}
