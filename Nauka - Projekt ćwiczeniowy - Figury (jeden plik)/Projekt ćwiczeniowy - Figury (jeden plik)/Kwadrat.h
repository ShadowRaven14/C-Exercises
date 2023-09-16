#pragma once
#include "Kszta³t.h"
class Kwadrat :
    public Kszta³t
{
    float a;
public:
    //Kontruktor
    Kwadrat(float x);

    //Funkcja
    virtual float ob_pole();

    //Funkcja
    virtual float ob_obwod();
};

