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

enum TypSprawdzenia
{
    BitOp,
    Modulo,
    Tanor
};
int main()
{
    int parzysta = 10;
    int nieparzysta = 13;

    int op;
    cout << "wybierz typ sprawdzenia parzystości:" << "\t0:BitOp\n\tModulo\n\tTanor\n";
    cin >> op;

    switch (op)
    {
    case BitOp:
        std::cout << "Sprawdzam czy " << parzysta << " jest parzysta (operacją bitową): " << CzyParzysta_lb(parzysta) << "\n";
        std::cout << "Sprawdzam czy " << nieparzysta << " jest parzysta (operacją bitową): " << CzyParzysta_lb(nieparzysta) << std::endl;
        break;

    case Modulo:
        std::cout << "Sprawdzam czy " << parzysta << " jest parzysta (operacją modulo): " << CzyParzysta_m(parzysta) << "\n";
        std::cout << "Sprawdzam czy " << nieparzysta << " jest parzysta (operacją modulo): " << CzyParzysta_m(nieparzysta) << std::endl;
        break;

    case Tanor:
        std::cout << "Sprawdzam czy " << parzysta << " jest parzysta (tanor operation): " << CzyParzysta_t(parzysta) << "\n";
        std::cout << "Sprawdzam czy " << parzysta << " jest parzysta (tanor operation): " << CzyParzysta_t(parzysta) << std::endl;
        break;
    }
}