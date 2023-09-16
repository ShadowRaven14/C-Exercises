#include "Dice.h"
#include <iostream>
#include <cstdlib>

int Dice::K20()
{
	return 0 + rand() % (20 - 0 + 1);
}

int Dice::K12()
{
	return 0 + rand() % (12 - 0 + 1);
}

int Dice::K6()
{
	return 0 + rand() % (6 - 0 + 1);
}