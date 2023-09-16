#include "Character.h"
#include <iostream>
#include <cstdlib>
#include <string>

int VitalPoints;
int AdrenalinePoints;
int	ManaPoints;

Character::Character()
{
	VitalPoints = 100;
	AdrenalinePoints = 100;
	ManaPoints = 100;
}

void Character::ShowYourself()
{
	std::cout << "VitalPoints: " << VitalPoints << std::endl;
	std::cout << "AdrenalinePoints: " << AdrenalinePoints << std::endl;
	std::cout << "ManaPoints: " << ManaPoints << std::endl;
}

void Character::BaseAttack()
{
	VitalPoints = 0+ rand() % (100-0+1);
}
