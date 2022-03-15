#include <iostream>

int silnia(int a)
{
    if (a == 1) return 1;
    else return a * silnia(a - 1);
}

int main()
{

    int a;
    std::cin >> a;
    int x = silnia(a);
    
    std::cout << x << " ";
 
    std::cout << (x - (x / 100) * 100 - (x - (x / 10) * 10)) / 10 << " ";

    std::cout << x - (x/10)*10 << " ";

    


}