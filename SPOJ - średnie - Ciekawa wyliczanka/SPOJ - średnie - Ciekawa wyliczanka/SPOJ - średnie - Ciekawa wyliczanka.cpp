#include <iostream>
#include <vector>

void strange(int n, std::vector<int>& liczba)
{

    if (liczba[n] == 5)
    {
        liczba[n] = 6;
    }
    else if (liczba[n] == 6)
    {
        liczba[n] = 5;
        if (n > 0) strange(n - 1, liczba);
        if (n == 0) liczba.push_back(5);
    }
}


int main()
{
    int n;
    std::cin >> n;
    int const p = 5, s = 6;
    std::vector <int> liczba;


    if (n > 0) liczba.push_back(5);

    for (int i = 1; i < n; i++)
    {
        strange(liczba.size() - 1, liczba);
    }

    std::cout << std::endl;
    for (int i = 0; i < liczba.size(); i++)
    {
        std::cout << liczba[i];
    }

    return 0;
}