#include <iostream>
#include "Kształt.h";
#include "Koło.h";
#include "Kwadrat.h";
#include <vector>

using namespace std;

/*
//KLASA ABSTRAKCYJNA KSZTAŁT
class Kształt
{
protected:
    float pole, obwod;
public:
    virtual float ob_pole() = 0;
    virtual float ob_obwod() = 0;
};


//KLASA KOŁO
class Koło : public Kształt
{
    const float pi = 3.14;
    float r;
public:
    //Kostruktor
    Koło(float x)
    {
        r = x;
    }

    //Funkcja
    virtual float ob_pole()
    {
        pole = r * r * pi;
        cout << "Pole wynosi: " << pole << endl;
        return pole;
    }

    //Funkcja
    virtual float ob_obwod()
    {
        obwod = 2 * pi * r;
        cout << "Obwod wynosi: " << obwod << endl;
        return obwod;
    }
};

//KLASA TRÓJKĄT
class Trójkąt : public Kształt
{
    float a, h;
public:
    //Konstruktor
    Trójkąt(float x, float y)
    {
        a = x;
        h = y;
    }

    //Funkcja
    virtual float ob_pole()
    {
        pole = (a * h) / 2;
        cout << "Pole wynosi: " << pole << endl;
        return pole;
    }

    //Funkcja
    virtual float ob_obwod()
    {
        obwod = a * a * a;
        cout << "Obwod wynosi: " << obwod << endl;
        return obwod;
    }
};



//KLASA KWADRAT
class Kwadrat : public Kształt
{
    float a;
public:
    //Kontruktor
    Kwadrat(float x)
    {
        a = x;
    }

    //Funkcja
    virtual float ob_pole()
    {
        pole = a*a;
        cout << "Pole wynosi: " << pole << endl;
        return pole;
    }

    //Funkcja
    virtual float ob_obwod()
    {
        obwod = 4 * a;
        cout << "Obwod wynosi: " << obwod << endl;
        return obwod;
    }
};

//Funkcja Uniwersalna
void oblicz_pole_figury(Kształt *wsk)
{
    wsk->ob_pole();
}

//Funkcja Uniwersalna
void oblicz_obwod_figury(Kształt* wsk)
{
    wsk->ob_obwod();
}
*/



//Main programu
int main()
{
    setlocale(LC_CTYPE, "Polish");
    std::cout << "Hello World!\n";

    /*
    vector <string> wyrazy = { "dziadek", "babcia", "ciocia" };
    wyrazy.push_back("wujek");
    vector <int> wek (2);
    cout << wek.max_size() << endl;
    wek.push_back(1);
    wek.push_back(2);
    wek.push_back(5);
    cout << wek.size()<<endl;
    
    for (int i = 0; i < wek.size(); i++)
    {
        cout << wek[i] << endl;
    }
    */

    Koło k(1);
    Kwadrat kw(2);
    Kształt* wsk = new Kwadrat(2);

    int a = 5;
    int* wk = &a;
    *wk = 10;
    cout << a << endl;
    

    //cout << kw.a;

    //Wskaźnik klasy abstrakcyjnej wskazuje na obiekt klasy pochodnej.
    //Dla obiektów statycznych stosujemy kropkę.
    //Dla obiektów dynamicznych stosujemy strzałkę
    
    wsk = &k;
    //k.ob_pole();
    //wsk->ob_pole();
    //wsk->ob_obwod();

    kw.ob_pole();

    return 0;
}
