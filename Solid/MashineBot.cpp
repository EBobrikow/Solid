#include "MashineBot.h"
#include <iostream>

//Bad example ===================================
DroidBot::DroidBot()
{
}

DroidBot::~DroidBot()
{
}

void DroidBot::Move(const int& x, const int& y, const int& z)
{
	// Bot moves to point at space
	std::cout << "Moving!" << std::endl;

}

void DroidBot::Fire()
{
	//Bot attacks some target
	std::cout << "Fire!!!!" << std::endl;
}

void DroidBot::Reload()
{
	// Bot reload his gun
	std::cout << "Hold on, reloading!" << std::endl;
}

TurretBot::TurretBot()
{
}

TurretBot::~TurretBot()
{
}

void TurretBot::Move(const int& x, const int& y, const int& z)
{
	// Turret cannot move, it's possion is constant
	// But we have to implement interface method Move
	// So we create this function but throw an exeption or leave an empty function
	// In that case further function call will create an error, crush, or undefined behavior
	std::cout << "Error! Turret can't move!" << std::endl;
}

void TurretBot::Fire()
{
	// Turret attacks some target
	std::cout << "Fire!!!!" << std::endl;
}

void TurretBot::Reload()
{
	// Turret reload his gun
	std::cout << "Hold on, reloading!" << std::endl;
}


//Fine example ===================================

FineDroidBot::FineDroidBot()
{
}

FineDroidBot::~FineDroidBot()
{
}

void FineDroidBot::Move(const int& x, const int& y, const int& z)
{
	// Droid moves to target
	// function implements a IMoveable interface
	std::cout << "Moving to point!" << std::endl;
}

void FineDroidBot::Fire()
{
	// Turret attacks some target
	std::cout << "Fire!!!!" << std::endl;
}

void FineDroidBot::Reload()
{
	// Turret reload his gun
	std::cout << "Hold on, reloading!" << std::endl;
}

FineTurretBot::FineTurretBot()
{
}

FineTurretBot::~FineTurretBot()
{
}

void FineTurretBot::Fire()
{
	// Turret attacks some target
	std::cout << "Fire!!!!" << std::endl;
}

void FineTurretBot::Reload()
{
	// Turret reload his gun
	std::cout << "Hold on, reloading!" << std::endl;
}

FineMeleeBot::FineMeleeBot()
{
}

FineMeleeBot::~FineMeleeBot()
{
}

void FineMeleeBot::Move(const int& x, const int& y, const int& z)
{
	// Bot moves to point at space
	std::cout << "Moving!" << std::endl;
}

void FineMeleeBot::Fire()
{
	// Turret attacks some target
	std::cout << "Engage meele combat!" << std::endl;
}
