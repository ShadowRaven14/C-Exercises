#include <iostream>
using namespace std;

class Punkt
{

private:
    int x, y;
    string nazwa;

public:
    int funkcja()
    {
        cout << "Funkcja";
        return x + y;
    }

    int set(int z)
    {
        x = z;
    }

    int get()
    {
        return x;
    }




};



int main()
{
    Punkt p1;
    //p1[1].x;
    //p1[2].nazwa;

    string nazwa="TAK";
    nazwa.size();

    cout<<p1.funkcja();

    int t = p1.get();



}