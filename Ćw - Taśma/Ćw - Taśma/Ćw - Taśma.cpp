// Ćw - Taśma.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
using namespace std;
int main()

{
	int n, d, j = 0, prawo = 0,lewo=0;
	cin >> n;
	vector <int> tab(n);

		for (int i = 0;i < n;i++)
		{
			cin >> d;
			tab[i] = d;
		}

		n--;
		while (j<=n)
		{
			if (prawo < lewo)
			{
				prawo = prawo + tab[j];
				j++;
			}
			else
			{
				lewo = lewo + tab[n];
				n--;
			}

			cout << prawo << " " << lewo << endl;
			
		}

		cout << j << endl;
		cout << abs( prawo - lewo);


	return 0;
}

