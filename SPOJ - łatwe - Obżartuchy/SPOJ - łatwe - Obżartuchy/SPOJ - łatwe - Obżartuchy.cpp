#include <iostream>
#include <vector>



int main()
{
    int doba = 86400;

    int lg = 1, pudelka, n = 0, a = 0;
    //std::cin >> lg;
    std::cin >> pudelka;
    std::vector <int> sekundy(lg);
    std::cin >> sekundy[0];

    /*
    for (int i = 0; i < lg; i++)
    {
        std::cin >> sekundy[i];
    }
    */

    while (doba >= sekundy[0])
    {
        doba = doba - sekundy[0];
        n++;
    }
    std::cout << n << " ";

    while (n >= pudelka)
    {
        n = n - pudelka;
        a++;
    }

    if (n > 0) a++;

    std::cout << a;

    return 0;
}