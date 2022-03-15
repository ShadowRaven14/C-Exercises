#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int n, d, zero = 0,jeden=0,suma=0;
	cin >> n;
	vector <int> tab(n);
	for(int i = 0;i < n;i++)
	{
		cin >> d;
		tab[i] = d;
		//if (d == 0) zero++;
		//else jeden++;
	}
	for (int i = 0;i < n;i++)
	{
		if (tab[i] == 0)
		{
			for (int j =i+1;j < n;j++)
			{
				if (tab[j] == 1) suma++;
			}
		}
	}
	cout << suma;
	return 0;
}