#pragma once

// Dependancy inversion example
// classes interact throw the interfaces, not throw dirrect comunication


class ITransformator
{
public:
	virtual int ProvidePower() = 0;
};

class Electricity : public ITransformator
{
public:

	Electricity();
	virtual ~Electricity();

	virtual int ProvidePower() override;

protected:
	int powerCapacity;
};

class IBenchInterface
{
public:
	virtual bool DoWork() = 0;
};

class Bench : public IBenchInterface
{
public:

	Bench();
	virtual ~Bench();

	virtual bool DoWork() override;
	void ConnectToPowerSource(ITransformator* source);

protected:
	ITransformator* powerSource;
};

class Employer
{
public:

	Employer();
	virtual ~Employer();

	virtual bool WorkOnBench();
	void AssignBench(IBenchInterface* bench);

protected:
	IBenchInterface* workBench;
};

class Factory
{
public:

	Factory();
	virtual ~Factory();

	void RunFactory();
};