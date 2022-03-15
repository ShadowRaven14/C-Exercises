// Ćw - Nawiasy.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<bool> wek(n);
    string x;
    
    //Sprawdzanie
    for (int i = 0; i < n; i++)
    {
        //Wczytanie wyrazu
        cin >> x;
        int o=0, k=0;

        //Sprawdzanie wyrazu
        for (int j = 0; j < x.size(); j++)
        {

            if (x[j] == '(' || x[j] == ')')
            {
                if (x[j] == '(') o++;
                else k++;
                    
                if (k > o)
                {
                    //wek.push_back(false);
                    wek[i] = false;
                    break;
                }

            }
            //Jeśli jest inny znak, program się kończy
            else
            {
                wek[i] = false;
                //wek.push_back(false);
                break;
            }

        }

        if (k == o && o != 0 && k != 0)
        {

            wek[i] = true;
            //wek.push_back(true);
        }
    }


    //Wypisywanie
    for (int i = 0; i < n; i++)
    {
        cout << wek[i] << endl;
    }


}