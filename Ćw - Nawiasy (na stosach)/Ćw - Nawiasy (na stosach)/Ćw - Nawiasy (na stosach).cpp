// Ćw - Nawiasy (na stosach).cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
#include <stack>
#include <vector>
//#include <bits/std.c++>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<bool> wek(n);
    stack<char>stos;
    string s;



    for (int g=0; g<n; g++)
    {
        cin >> s;
        int d = s.size();


        int p = 0, l = 0;

        if (d % 2 == 1)
        {
            //cout << "NIE";
            wek[g] = false;
        }
        else
        {

            for (int i = 0; i < d; i++)
            {
                if (s[i] == '(' || s[i] == ')')
                {
                    if (s[i] == '(') stos.push(s[i]);
                    else if (s[i] == ')')
                    {
                        if (stos.empty() == true)
                        {
                            //cout << "NIE";
                            stos.push('-');
                            wek[g] = false;
                            break;

                        }
                        stos.pop();
                    }
                }
                else
                {
                    wek[g] = false;
                    break;
                }
                    

            }

            if (stos.empty() == true  && s[d-1])
            {
                //cout << "TAK";
                //if(wek[g] != false) 
                wek[g] = true;
            }
            else
            {
                //cout << "NIE";
                wek[g] = false;
            }
        }
            
    }


    for (int g = 0; g < n; g++)
    {
        cout << wek[g] << endl;
    }


}

// Uruchomienie programu: Ctrl + F5 lub menu Debugowanie > Uruchom bez debugowania
// Debugowanie programu: F5 lub menu Debugowanie > Rozpocznij debugowanie

// Porady dotyczące rozpoczynania pracy:
//   1. Użyj okna Eksploratora rozwiązań, aby dodać pliki i zarządzać nimi
//   2. Użyj okna programu Team Explorer, aby nawiązać połączenie z kontrolą źródła
//   3. Użyj okna Dane wyjściowe, aby sprawdzić dane wyjściowe kompilacji i inne komunikaty
//   4. Użyj okna Lista błędów, aby zobaczyć błędy
//   5. Wybierz pozycję Projekt > Dodaj nowy element, aby utworzyć nowe pliki kodu, lub wybierz pozycję Projekt > Dodaj istniejący element, aby dodać istniejące pliku kodu do projektu
//   6. Aby w przyszłości ponownie otworzyć ten projekt, przejdź do pozycji Plik > Otwórz > Projekt i wybierz plik sln
