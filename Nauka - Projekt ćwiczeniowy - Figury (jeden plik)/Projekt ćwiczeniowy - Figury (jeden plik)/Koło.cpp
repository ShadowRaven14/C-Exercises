#include "Ko�o.h"
#include <iostream>
using namespace std;

    const float pi = 3.14;
    float r;

    //Kostruktor
    Ko�o::Ko�o(float x)
    {
        r = x;
    }

    //Funkcja
    float Ko�o::ob_pole()
    {
        pole = r * r * pi;
        cout << "Pole wynosi: " << pole << endl;
        return pole;
    }


    //Funkcja
    float Ko�o::ob_obwod()
    {
        obwod = 2 * pi * r;
        cout << "Obwod wynosi: " << obwod << endl;
        return obwod;
    }