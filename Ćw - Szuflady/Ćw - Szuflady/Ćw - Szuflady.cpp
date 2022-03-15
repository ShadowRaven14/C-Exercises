// Ćw - Szuflady.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int n,d,s=0;
	cin >> n;
	vector <int> tab(n);
	for(int i=0;i<n;i++)
	{ 
		cin >> d;
		tab[i] = d;
	}
	for (int i = tab.size()-1; i >0 ;i--)
	{
		if (tab[i] <= 0)
		{
			cout << "-1"; return 0;
		}
		if (tab[i] <= tab[i - 1])
		{
			tab[i - 1] = tab[i] - 1;
			s++;
		}
		
		
	}
	cout << s;

	return 0;
}

