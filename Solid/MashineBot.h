#pragma once

// Liskov substitution bad example
class IMashineBot
{
public:
	// Interface for battle mashine
	virtual void Move(const int& x, const int& y, const int& z) = 0;
	virtual void Fire() = 0;
	virtual void Reload() = 0;
};

class DroidBot : public IMashineBot
{
public:

	DroidBot();
	virtual ~DroidBot();

	virtual void Move(const int& x, const int& y, const int& z) override;
	virtual void Fire() override;
	virtual void Reload() override;
};

class TurretBot : public IMashineBot
{
public:

	TurretBot();
	virtual ~TurretBot();

	virtual void Move(const int& x, const int& y, const int& z) override;
	virtual void Fire() override;
	virtual void Reload() override;
};

// Liskov substitution fine example
// If there is a function that will use as param base class (interface in our case)
// there should be no problems to pass to this function any of inherited class object
// To avoid such mistake better to split interface.
// Also shown Interface Segrigation Principle

class IFireing
{
public:
	// Interface for attack mashine
	virtual void Fire() = 0;
};

class IReloadeable
{
public:
	// Interface for mashine reload 
	virtual void Reload() = 0;
};

class IMoveable
{
public:
	// Interface for moveable mashine
	virtual void Move(const int& x, const int& y, const int& z) = 0;
};


class FineDroidBot : public IFireing, public IReloadeable, public IMoveable
{
public:

	FineDroidBot();
	virtual ~FineDroidBot();

	virtual void Move(const int& x, const int& y, const int& z) override;
	virtual void Fire() override;
	virtual void Reload() override;
};

// No need to implement IMoveable because turrent locaion is constant
class FineTurretBot : public IFireing, public IReloadeable
{
public:

	FineTurretBot();
	virtual ~FineTurretBot();

	virtual void Fire() override;
	virtual void Reload() override;
};

// For melee combat bot there is no need to reload weapon
class FineMeleeBot : public IFireing,  public IMoveable
{
public:

	FineMeleeBot();
	virtual ~FineMeleeBot();

	virtual void Move(const int& x, const int& y, const int& z) override;
	virtual void Fire() override;
};