#include "Kwadrat.h"
#include <iostream>
using namespace std;

    float a;

    //Kontruktor
    Kwadrat::Kwadrat(float x)
    {
        a = x;
    }

    //Funkcja
    float Kwadrat::ob_pole()
    {
        pole = a * a;
        cout << "Pole wynosi: " << pole << endl;
        return pole;
    }

    //Funkcja
    float Kwadrat::ob_obwod()
    {
        obwod = 4 * a;
        cout << "Obwod wynosi: " << obwod << endl;
        return obwod;
    }