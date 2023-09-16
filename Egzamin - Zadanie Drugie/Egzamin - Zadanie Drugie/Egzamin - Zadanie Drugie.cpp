#include <iostream>
#include <vector>
#include <string>
using namespace std;

void quicksort(int* tab, int left, int right)
{
    int l = left, r = right;
    int pivot = tab[(left + right) / 2];

    while (1)
    {
        while (pivot > tab[l]) l++;

        while (pivot < tab[r]) r--;

        if (l <= r)
        {
            std::swap(tab[l], tab[r]);

            l++;
            r--;
        }
        else break;

    }

    if (r > left) quicksort(tab, left, r);
    if (l > left) quicksort(tab, l, right);
}


void solution()
{

}

int main()
{
    std::cout << " " << std::endl;
    std::string word;
    std::vector <int> A;
    int n=10, a=0;

    /*
    for (int i = 0; i < n; i++)
    {
        a++;
    }
    std::cout << a <<endl;
    a = 0;

    for (int i = 0; i < n; ++i)
    {
        a++;
    }
    std::cout << a<<endl;
    a = 0; n = 10;

    while(n--)
    {
        cout << a;
        a++;
    }
    std::cout << a << endl;
    a = 0; n = 10;

    while(--n)
    {
        cout << a;
        a++;
    }
    std::cout << a << endl;
    a = 0;
    */


    std::vector <int> v5;
    std::vector <int> v0;

    v5.push_back(1);
    v5.push_back(2);
    v5.push_back(3);
    v5.push_back(3);
    v5.push_back(3);

    if (sizeof(v5) == sizeof(v0))
    {
        cout << "Super";
    }

    solution();

    return 0;
}