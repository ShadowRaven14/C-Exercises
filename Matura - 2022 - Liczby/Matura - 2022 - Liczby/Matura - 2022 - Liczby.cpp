#include <iostream>
#include <fstream>
using namespace std;

bool czy_pierwsza(int n)
{
    if (n < 2)
        return false; //gdy liczba jest mniejsza ni¿ 2 to nie jest pierwsz¹

    for (int i = 2;i * i <= n;i++)
        if (n % i == 0)
            return false; //gdy znajdziemy dzielnik, to dana liczba nie jest pierwsza
    return true;
}


int main()
{

    ifstream dane("przyklad.txt");

    /*
    int tab[200];
    int a,l,m,n;
    for (int i = 0;i < 200;i++)
    {
        dane >> a;
        tab[i] = a;

    }
    for (int i = 0;i < 200;i++)
    {
        for (int j = 0;j < 200;j++)
        {
            if (tab[j] % tab[i] == 0 && tab[j] > tab[i]) 
            {
                m = j;

                for (int k = 0;k < 200;k++)
                {
                    if (tab[k] % tab[j] == 0 && tab[k] > tab[j])
                    {
                        //n = k;
                        //cout << tab[i] << " " << tab[m] << " " << tab[n] << endl;
                    }
                }
            }
        }
    }
    */
    
    int a,m1=0,m2=0,l1,l2;
    for (int i = 0;i < 200;i++)
    {
        int d = 2, ile1 = 0, ile2 = 0;
        dane >> a;
        int p = a;
        int l = a;
        while (a > 1)
        {
            if (a % d == 0)
            {
                ile1++;
                //p = a;
                a = a / d;
            }
            else
            {
                if (czy_pierwsza(d) == true
                    && p % d == 0 && p > 0)
                {
                    cout << p << " " << d << endl;
                    ile2++;
                }
                    
                    
                d++;
            }
            
        }
        if (czy_pierwsza(d) == true && p % d == 0 && p > 0) ile2++;
        if (ile1 > m1) { m1 = ile1; l1 = l; }
        if (ile2 > m2) { m2 = ile2; l2 = l; }
    }
    cout << l1 << " " << m1 << " "
        << l2 << " " << m2;
        
    //ZAD1
    /*
    int ile=0;
    string a="", p="";
    for (int i = 0;i < 200;i++)
    {
        dane >> a;
        if (a[0] == a[a.size() - 1])
        {
           // tab[(int)a]++;
            ile++;
            if (p == "") p=a;
        }
    }
    cout << ile << " " << p;
    */
}

