#include <iostream>
#include <vector>
using namespace std;

class Punkt
{
public:
    string nazwa;
    int x, y;
    vector<int>tab;
    int* z;

public:
    Punkt()
    {
        x = 0;
        y = 0;
        nazwa = "XYZ";
    }

    Punkt(int z)
    {
        x = z;
    }

    Punkt(string n)
    {
        nazwa = n;
    }

    Punkt(int x1, int y1, string nowanazwa)
    {
        x = x1;
        y = y1;
        nazwa = nowanazwa;
    }

    ~Punkt()
    {
        delete z;
        delete tab;
    }

    int suma()
    {
        return x + y;
    }

    int suma(bool b)
    {

    }

    int dodaj()
    {
        x = x + 5;
    }

    int edytujnazwe()
    {
        string nowanazwa;
        cin >> nowanazwa;
        nazwa = nowanazwa;
    }

};




int main()
{
    std::cout << "Hello World!\n";
    int i;
    Punkt z1;
    Punkt z2(1, 2, "A");
    Punkt z3("5");
    cout << z1.x;
    z1.suma(0);
    //z1.odejmowanie();
    z1.x = 10;
    z1.y = 5;
    z1.nazwa = "A";
    cout << z1.x;
    //z1.suma();
    //z1.dodaj();
    z1.x = z1.suma();
    //t = t + 1;

    string n;
    n.size();
    
}
