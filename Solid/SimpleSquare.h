#pragma once
#include <cmath> 

// Open-Close principle add new functionality but not change the old one
class SimpleSquare
{
public:
	SimpleSquare();
	virtual ~SimpleSquare();

	int GetSideLenth() const;
	void SetSideLenth(const int& lenth);

	virtual int GetSquareLenth() const;

protected:
	int sideLenth;
};

class ImpruvedSquare : public SimpleSquare
{
public:
	ImpruvedSquare();
	virtual ~ImpruvedSquare();

	virtual int GetSquareArea() const;

protected:
	
};

class FinaleSquare : public ImpruvedSquare
{
public:
	FinaleSquare();
	virtual ~FinaleSquare();

	virtual float GetHypotenuseLenth() const;

protected:

};
