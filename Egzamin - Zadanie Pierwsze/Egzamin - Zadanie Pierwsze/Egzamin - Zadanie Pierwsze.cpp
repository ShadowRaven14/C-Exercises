#include <iostream>
#include <vector>
#include <string>

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
    int n, a;

    solution();

    word = "aBCD";
    //std::cout << int(word[0]);

    char znak='!';

    if (int(znak) >= 65 && int(znak) <= 90)
    {
        std::cout << "duza";
    }
    if (int(znak) >= 97 && int(znak) <= 122)
    {
        std::cout << "mala";
    }
    if ((int(znak) < 97 && int(znak) > 122) && (int(znak) < 65 && int(znak) > 90))



    return 0;
}