#pragma once

#include "Stocznia.hpp"

unsigned int transportujFlota(unsigned int towar)
{
    Stocznia S;   

    double suma_towaru = 0;

    do
    {
        Statek* ship = S();
        suma_towaru += ship->transportuj();
        delete ship;

    } while (towar <= suma_towaru);

    // Twoja implementacja tutaj
    return 0;
}