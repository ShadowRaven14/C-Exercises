#include <iostream>
using namespace std;

int main()
{
    std::cout << "Hello World!\n";
    int n, silnia=1, jednosci,dziesiadki;
    cin >> n;
    for (int i = silnia; i <= n; i++)
    {
        silnia = silnia * i;
    }

    cout << silnia<<endl;
    jednosci = silnia % 10;
    dziesiadki = silnia % 100;
    dziesiadki = dziesiadki / 10;
    cout << jednosci<<endl<<dziesiadki;

}

