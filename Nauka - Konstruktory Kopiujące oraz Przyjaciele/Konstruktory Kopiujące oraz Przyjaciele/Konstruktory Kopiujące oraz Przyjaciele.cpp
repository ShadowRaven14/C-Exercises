#include <iostream>


class Ekwipunek final
{
private:
    std::string nazwa;
    std::string *wsk;
    int tab[10];
public:
    //KONSTRUKTOR
    Ekwipunek() 
    {
        std::cout << "Konstruktor domyslny" << std::endl;
        nazwa = "N";
        //wsk = &nazwa;
        wsk = new std::string("");
        for (int i = 0; i < 10; i++)
        {
            tab[i] = i + 1;
        }
    }

    //KONSTRUKTOR
    Ekwipunek(std::string &n, int &a)
    {
        std::cout << "Konstruktor z parametrami" << std::endl;
        nazwa = n;
        wsk = new std::string("brak");
        for (int i = 0; i < 10; i++)
        {
            tab[i] = a;
        }
    }

    //KONSTRUKTOR KOPIUJĄCY
    Ekwipunek(const Ekwipunek& NewEkwipunek)
    {
        std::cout << "Konstruktor-Kopiujący" << std::endl;
        nazwa = NewEkwipunek.nazwa;
        wsk = new std::string(*NewEkwipunek.wsk);
        for (int i = 0; i < 10; i++)
        {
            tab[i] = NewEkwipunek.tab[i];
        }
    }

    //DESTRUKTOR
    ~Ekwipunek() 
    {
        std::cout << "Destruktor" << std::endl;
        delete wsk;
    }

    //DEKLARACJA PRZYJACIELA
    //friend void wypisz(Ekwipunek &e);

    Ekwipunek& operator= (const Ekwipunek& NewEkwipunek)
    {

        std::cout << "Przeciazony operator =" << std::endl;
        nazwa = NewEkwipunek.nazwa;
        wsk = new std::string(*NewEkwipunek.wsk);
        for (int i = 0; i < 10; i++)
        {
            tab[i] = NewEkwipunek.tab[i];
        }

        return *this;
    }

    Ekwipunek& operator= (const std::string &NewName)
    {
        std::cout << "Przeciazony operator = dla string" << std::endl;
        nazwa = NewName;

        return *this;
    }

    std::string getName() const
    {
        return nazwa;
    }

    std::string* getWsk() const
    {
        return wsk;
    }

    /*
    int* getTab() const
    {
        return tab;
    }
    */

};

/*
//FUNKCJA ZAPRZYJAŹNIONA
void wypisz(Ekwipunek &e)
{
    std::cout << e.nazwa << std::endl;
    std::cout << *e.wsk << " ";
    std::cout << e.wsk << std::endl;
    for (int i = 0; i < 10; i++)
    {
        std::cout << e.tab[i] << std::endl;
    }
}
*/

void wypisz(const Ekwipunek& e)
{
    std::cout << e.getName() << std::endl;
    std::cout << *e.getWsk() << std::endl;
    //std::cout << *e.getTab() << std::endl;
}


//MAIN
int main()
{
    std::cout << "Hello World!\n";
    std::string n = "nazwa";
    int liczba = 5;
    Ekwipunek eq1;
    Ekwipunek eq2(n, liczba);
    
    //wypisz(eq1);
    //eq1 = eq2;
    //wypisz(eq1);
    //wypisz(eq2);

    eq1 = "moja nowa nazwa";
    wypisz(eq1);


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
