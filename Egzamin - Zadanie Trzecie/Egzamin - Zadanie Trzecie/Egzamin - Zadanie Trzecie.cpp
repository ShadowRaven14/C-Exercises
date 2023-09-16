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
    std::string word = "slowo";
    std::vector <int> A;
    int n=0, a;

    word[0] == 's';
    solution();

    while (n != word.size())
    {
        std::cout << n;
        n++;
        
    }

    return 0;
}