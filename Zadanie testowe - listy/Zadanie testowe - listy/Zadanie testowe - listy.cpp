#include <iostream>
#include <list>
//#include <cstdlib>
//#include <cmath>
//#include <cstdio>
//#include <fstream>
using namespace std;


//TWORZENIE STRUKTURY
struct lista
{
    int numer;
    string marka;
    int rocznik;

    struct lista* nast;
};
//TWORZENIE STRUKTURY

//FUNKCJE
struct lista* wstaw_r(struct lista* p, int numer, string marka, int rocznik)
{
    struct lista* element = new struct lista;
    element->numer = numer;
    element->marka = marka;
    element->rocznik = rocznik;
    element->nast = NULL;

    if (p == NULL) return element;

    if (element->rocznik < p->rocznik)
    {
        element->nast = p;
        return element;
    }
    struct lista* tmp = p;
    while (tmp->nast && (tmp->nast)->rocznik < element->rocznik)
        tmp = tmp->nast;
    element->nast = tmp->nast;
    tmp->nast = element;
    return p;
}


void wypisz(struct lista* p)
{
    struct lista* tmp = p;
    while (tmp != NULL)
    {
        cout << tmp->numer << " ";
        cout << tmp->marka << " ";
        cout << tmp->rocznik << " ";
        cout << endl;

        tmp = tmp->nast;
    }
}
//FUNKCJE



int main()
{
    struct lista* pierwszy = NULL;
    int numer;
    string marka;
    int rocznik;

    for (int i = 0; i < 3; i++)
    {
        cin >> numer;
        cin >> marka;
        cin >> rocznik;

        pierwszy = wstaw_r(pierwszy, numer, marka, rocznik);
    }

    wypisz(pierwszy);

    struct lista* tmp = pierwszy;
    while (tmp != NULL)
    {

        tmp = tmp->nast;
    }

    delete tmp;

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
