#include "Ko這.h"
#include <iostream>
using namespace std;

    const float pi = 3.14;
    float r;

    //Kostruktor
    Ko這::Ko這(float x)
    {
        r = x;
    }

    //Funkcja
    float Ko這::ob_pole()
    {
        pole = r * r * pi;
        cout << "Pole wynosi: " << pole << endl;
        return pole;
    }


    //Funkcja
    float Ko這::ob_obwod()
    {
        obwod = 2 * pi * r;
        cout << "Obwod wynosi: " << obwod << endl;
        return obwod;
    }