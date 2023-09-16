#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
//using namespace std;

int silnia(int n)
{
    if (n == 1) return 1;
    return silnia(n - 1) * n;
}

void solution(std::vector<std::string>& wek)
{
    int ile = 0, n = 0;
    for (int i = 0; i < silnia(wek.size()); i++)
    {

        if (i != 0 && i % wek.size() == 0)
        {
            std::cout << n << std::endl;
            if( (n + (i / wek.size())) < wek.size())
                std::swap(wek[n], wek[n + (i/wek.size()) ]);
            else
                std::swap(wek[n], wek[0+ (i / wek.size())]);
            n++;
            if (n >= wek.size()) n = n - wek.size();
        }
        //ile++;
        //if (ile >= wek.size()) ile = ile - wek.size();


        for (int y = 0; y < wek.size(); y++)
        {
            std::cout << wek[y];
        }
        std::cout << std::endl;


        for (int y = 0; y < wek.size() - 1; y++)
        {
            std::string x = wek[y];
            wek[y] = wek[y + 1];
            wek[y + 1] = x;
        }       
    }   
}

int main()
{
    std::vector < std::string > wek;
    wek.push_back("A");
    wek.push_back("B");
    wek.push_back("C");
    wek.push_back("D");
    //wek.push_back("E");

    printf("Aktualna liczba elementow w kontenerze: %d\n", wek.size());
    std::cout << std::endl;
    //for (int i = 0; i < wek.size(); i++) std::cout << wek[i] << " ";

    solution(wek);
    //vector < int > A = { 3, 6, 1, 4, 2, 3, 1 };
}