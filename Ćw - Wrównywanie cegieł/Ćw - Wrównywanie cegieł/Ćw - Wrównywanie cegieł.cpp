#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n,a,m=0,c=0;
    

    cin >> n;
    vector<int> wek(n);

    for (int i = 0; i < n; i++)
    {
        cin >> wek[i];

    }
    int minimalna = wek[0], maksymalna = wek[0];

    for (int i = 0; i < n; i++)
    {
        //minimum i maksimum
        if (i > 0)
        {
            if (wek[i - 1] < wek[i])
            {
                maksymalna = wek[i];
            }

            if (wek[i - 1] > wek[i])
            {
                minimalna = wek[i];
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (wek[i] != maksymalna && wek[i] != minimalna)
        {
            m = (maksymalna - minimalna) / 2;
        }
        else
        {
            m = (maksymalna - minimalna);
        }
    }




    cout << minimalna << endl << maksymalna << endl;
    a = maksymalna - m;


    
    for (int i = 0; i < n; i++)
    {
        
        if (wek[i] == a || 
            wek[i] - m == a ||
            wek[i] + m == a)
        {
            cout << m;
            return m;
        }
        else
        {
            cout << -1;
            return -1;
        }
    }
    



}

//if (wek[i + 1] + b == wek[i] || wek[i + 1] - b == wek[i])