#include <iostream>

using namespace std;
char tab[1005];
char tab2[1005][1005];


string NaNasze()
{
    int w, k, d;
    string s;
    cin >> w >> k;
    for (int i = 0;i < w;i++)
    {
        cin >> s;
        d = s.size();
        for (int j = 0;j < d;j++)
        {
            if (s[j] != '.') tab[j] = s[j];
        }
    }
    for (int i = 0;i < d;i++)
    {
        cout << tab[i];
    }
    return s;
}


string kob()
{
    bool q = false;
    int w, k, d;
    string s;
    cin >> w >> k;
    cin >> s;
    d = s.size();
    
    for (int i = 0;i < d;i++)
    {
        tab2[k][i]=s[i];
       
        if (k == 0) q = true;
        if (k == w-1) q = false;

        if (q == true) k++;
        else k--;

    }
    for (int i = 0;i < d;i++)
    {
        cout << tab[i];
    }
    return s;
}


string pyth()
{
    bool q = true;
    int w, k, d;
    string s;
    cin >> w >> k;
    cin >> s;
    d = s.size();

    for (int i = 0;i < d;i++)
    {
        tab2[k][i] = s[i];

        if (k == 0) q = true;
        if (k == w-1) q = false;

        if (q == true) k++;
        else k--;

    }
    for (int i = 0;i < d;i++)
    {
        cout << tab[i];
    }
    return s;
}

int main()
{
    for (int z = 0; z < 1005; z++)
    {
        for (int y = 0; y < 1005; y++)
        {
            tab2[z][y] = '.';
        }
    }

    /*
    tab2[2][6] = 'k';
    //cout << NaNasze();
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            cout << tab2[i][j]<<" ";
        }
        cout << endl;
    }
    cout << "koniec" << endl;
    */

    cout << endl;
    kob();
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            cout << tab2[i][j] << " ";
        }
        cout << endl;
    }

    cout << endl;
    pyth();
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            cout << tab2[i][j] << " ";
        }
        cout << endl;
    }

    return 0;

    /*
    string user_text;
    while (0)
    {
        cin >> user_text;
        switch (user_text)
        {

        case "wartosc_1":
            //jakiś kod
            break;

        default:
            //jakiś kod
            break;
        }
    }
    */
    

    /*
    string user_text;
    while (0)
    {
        if (user_text == "SSS")
        {
            kob();
        }
        if (user_text == "cii")
        {
            cout << "Program zakonczony";
            return 0;
        }
    }
    */
    
}