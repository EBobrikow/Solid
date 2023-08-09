#include "Factory.h"
#include<cstdio>
#include<iostream>
#include<ctime>
using namespace std;

Factory::Factory()
{
}

Factory::~Factory()
{
}

void Factory::RunFactory()
{
	Electricity* powerSource = new Electricity();
	Bench* workingBench = new Bench();
	workingBench->ConnectToPowerSource(powerSource);

	Employer* employer = new Employer();
	employer->AssignBench(workingBench);

	while (1)
	{
		int delay = 1;
		delay *= CLOCKS_PER_SEC;
		clock_t now = clock();
		while (clock() - now < delay);
		if (!employer->WorkOnBench())
		{
			cout << "Factory shotdown!" << endl;
			delete powerSource;
			delete workingBench;
			delete employer;
			return;
		}
		
	}
}

Employer::Employer()
{
}

Employer::~Employer()
{
}

bool Employer::WorkOnBench()
{
	if (workBench != nullptr)
	{
		return workBench->DoWork();
	}
	return false;
}

void Employer::AssignBench(IBenchInterface* bench)
{
	workBench = bench;
}

Electricity::Electricity()
	: powerCapacity(200)
{
}

Electricity::~Electricity()
{
}

int Electricity::ProvidePower()
{
	powerCapacity -= 20;
	return powerCapacity;
}

Bench::Bench()
{
}

Bench::~Bench()
{
}

bool Bench::DoWork()
{
	if (powerSource != nullptr)
	{
		if (powerSource->ProvidePower() > 0)
		{
			cout << "Bench working" << endl;
			return true;
		}
	}
	return false;
}

void Bench::ConnectToPowerSource(ITransformator* source)
{
	powerSource = source;
}
