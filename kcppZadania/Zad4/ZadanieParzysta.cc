#include <iostream>

bool CzyParzysta_lb(int val)
{
    return !(val & 1);
}

bool CzyParzysta_m(int val)
{
    return val % 2 == 0;
}

bool CzyParzysta_t(int val)
{
    return (val & 1) ? false : true;
}

int main()
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