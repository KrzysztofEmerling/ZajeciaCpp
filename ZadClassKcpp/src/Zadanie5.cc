#include "Zadanie5.h"

#include <iostream>

bool Zadanie5::CzyParzysta_lb(int val)
{
    return 1 ^ (val & 1);
}

bool Zadanie5::CzyParzysta_m(int val)
{
    return val % 2 == 0;
}

bool Zadanie5::CzyParzysta_t(int val)
{
    return (val & 1) ? false : true;
}

Zadanie5::Zadanie5()
{
    SetID("ZadanieParzysta.cc (4.7) - Program pokazuje 3 sposoby sprawdzenia parzystości.");
}
void Zadanie5::Present()
{
    int parzysta = 10;
    int nieparzysta = 13;

    std::cout << "Sprawdzam czy " << parzysta << " jest parzysta (operacją bitową): " << CzyParzysta_lb(parzysta) << "\n";
    std::cout << "Sprawdzam czy " << nieparzysta << " jest parzysta (operacją bitową): " << CzyParzysta_lb(nieparzysta) << "\n";

    std::cout << "Sprawdzam czy " << parzysta << " jest parzysta (operacją modulo): " << CzyParzysta_m(parzysta) << "\n";
    std::cout << "Sprawdzam czy " << nieparzysta << " jest parzysta (operacją modulo): " << CzyParzysta_m(nieparzysta) << "\n";

    std::cout << "Sprawdzam czy " << parzysta << " jest parzysta (tanor operation): " << CzyParzysta_t(parzysta) << "\n";
    std::cout << "Sprawdzam czy " << nieparzysta << " jest parzysta (tanor operation): " << CzyParzysta_t(nieparzysta) << std::endl;
}