#pragma once
#include "Kszta�t.h"
class Ko�o :
    public Kszta�t
{
    const float pi = 3.14;
    float r;
public:
    //Kostruktor
    Ko�o(float x);

    //Funkcja
    virtual float ob_pole();

    //Funkcja
    virtual float ob_obwod();
};

