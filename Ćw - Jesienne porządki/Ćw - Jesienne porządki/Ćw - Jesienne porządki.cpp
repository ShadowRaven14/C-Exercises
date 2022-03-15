#include <iostream>
#include <vector>
using namespace std;

class punkt
{
public:
	int x, y;

	punkt()
	{
		cout << "Konstruktor"<<endl;
		x = 0;
		y = 0;
	}

	~punkt()
	{
		cout << "Destruktor" << endl;
	}

};

int main()
{

	int n,droga=1000000,suma=0;
	cin >> n;
	vector<punkt> tab(n);
	punkt p1;
	int nowy_x, p;
	

	for (int i = 0; i < n; i++)
	{
		cout << "Zainicjowano nowy punkt, poday 'x' oraz 'y':" << endl;
		cout << "x: "; cin >> tab[i].x;
		cout << "y: "; cin >> tab[i].y;	
	}


	for (int j = 0; j < n; j++)
	{
		nowy_x = tab[j].x;

		for (int i = 0; i < n; i++)
		{
			suma = suma + abs(tab[i].x - nowy_x) + abs(tab[i].y);
		}


		if (suma < droga)
		{
			droga = suma;
			p = nowy_x;
		}
		
		suma = 0;
	}
	cout<<p<<" " << droga;
}
