#pragma once
#include "Kszta�t.h"
class Kwadrat :
    public Kszta�t
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

