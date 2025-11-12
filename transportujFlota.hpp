#pragma once

#include "Stocznia.hpp"

unsigned int transportujFlota(unsigned int towar)
{
    
    Stocznia S{};   

    int suma_towaru = 0;

    int ile_zaglowcow = 0;

    while (towar > suma_towaru)
    {
        Statek* ship = S();

        suma_towaru += ship->transportuj();

        if (dynamic_cast< Zaglowiec* >(ship) != nullptr)
            ile_zaglowcow++;
        
        delete ship;
    } 
    
    // Twoja implementacja tutaj 
    return ile_zaglowcow;
}