#pragma once
#include <iostream>


class Character
{
private:
	int VitalPoints;
	int AdrenalinePoints;
	int	ManaPoints;

public:
	Character();
	//friend int K20();
	void ShowYourself();
	void BaseAttack();

};
