// Zadanie testowe - wektory.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int solution(vector<int> &A) 
{
    // write your code in C++14 (g++ 6.2.0)
    vector < int > C (A.size());

    for (int i = 0; i < A.size(); i++)
    {
        C[i] = i + 1;
        cout << C[i]<<" ";
    }

    cout << endl;
    for (int i = 0; i < A.size(); i++)
    {
        for (int j = 0; j < C.size(); j++)
        {
            cout << " i,j: " << i << "," << j<<"    ";
            cout << A[i] << " " << C[j] << endl;;
            if (A[i] == C[j])
            {
                C[j] = 0;
                break;
            }
        }
    }

    cout << endl;
    for (int i = 0; i < A.size(); i++)
    {
        cout << C[i] << " ";
    }

    cout << endl;
    for (int i = 0; i < C.size(); i++)
    {
        if (C[i] != 0) return C[i];
    }
}



int main()
{
    cout << "Hello World!\n";
    vector < int > A = {3, 6, 1, 4, 2, 3, 1};
    cout<<solution(A);

    return 0;
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
