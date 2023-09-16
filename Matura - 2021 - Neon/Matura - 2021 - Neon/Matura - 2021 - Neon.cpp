#include <iostream>
using namespace std;

string wyraz = "";

string Dopisz(char n)
{
    wyraz =wyraz+n;
}

string Zmien(char n)
{
    wyraz[wyraz.size()-1]=n;
}

string Usun(int n)
{
    wyraz.erase(0, n);
}

string Przesun(char n)
{
    int d = wyraz.size() - 1;
    for (int i = 0;i < d - 1;i++)
    {
        if (wyraz[i] == n) wyraz[i] == (char)((int)wyraz[i] + 1);
    }
    wyraz = wyraz + n;
}

int main()
{
    

}