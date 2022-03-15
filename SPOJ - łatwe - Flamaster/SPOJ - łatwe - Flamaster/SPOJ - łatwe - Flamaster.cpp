// SPOJ - łatwe - Flamaster.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
#include <string>

void flamaster(std::string wyraz)
{
    std::string a;
    std::string b;
    a = wyraz[0];
    //std::cout << a << std::endl;

    int n=1;

    for (int i = 1; i < wyraz.size(); i++)
    {
        if (a[0] != wyraz[i] || i==(wyraz.size()-1) )
        {
            if (n == 1) std::cout << a[0];
            if (n == 2) std::cout << a[0] << a[0];
            if (n > 2)
            {
                std::cout << a[0] << n;
            }

            a[0] = wyraz[i];
            n = 1;
        }
        else
        {
            n++;
        }
            
    }
}

int main()
{
    std::cout << "Hello World!\n";
    std::string wyraz;
    std::cin >> wyraz;

    flamaster(wyraz);


}