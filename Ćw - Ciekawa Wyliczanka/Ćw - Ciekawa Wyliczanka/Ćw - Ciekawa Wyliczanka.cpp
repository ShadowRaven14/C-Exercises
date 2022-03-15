// Ćw - Ciekawa Wyliczanka.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
#include <cmath>
using namespace std;

int tab[100] = { 0 };

int main()
{
	int n;
	cin >> n;
	int y = 0;

	do
	{
		if (n % 2 == 0)
		{
			tab[y] = 6;
			cout << 6 << endl;
			n = (n - 1) / 2;
		}
		else
		{
			tab[y] = 5;
			cout << 5 << endl;
			n = (n - 1) / 2;
		}
			
		y++;

	} while (n != 0);
		
	y = 0;

	for (int i = 99; i >= 0; i--)
	{
		if(tab[i] == 5 || tab[i] == 6)
			cout << tab[i];
	}
}

