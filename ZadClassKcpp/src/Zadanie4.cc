#include "Zadanie4.h"

#include <iostream>
#include <cmath>

Prostokat::Prostokat(double a) : a(a), b(a) {}
Prostokat::Prostokat(double a, double b) : a(a), b(b) {}

double Prostokat::pole()
{
    return a * b;
}
double Prostokat::obwod()
{
    return 2 * (a + b);
}

Trojkat::Trojkat(double a, double b, double c) : a(a), b(b), c(c) {}

double Trojkat::pole()
{
    double p = obwod() / 2;

    return sqrt(p * (p - a) * (p - b) * (p - c));
}

double Trojkat::obwod()
{
    return a + b + c;
}

Kolo::Kolo(double r) : r(r) {}

double Kolo::pole()
{
    return r * r * PI;
}
double Kolo::obwod()
{
    return 2 * PI * r;
}

double Kolo::dystans(double pole)
{
    // P = pi * r ^ 2

    // P / pi = r ^ 2

    // r = sqrt(P / pi)
    return sqrt(pole / PI);
}

Zadanie4::Zadanie4()
{
    SetID("ZadMetodyAbstrakcyjne.cc");
}
void Zadanie4::Present()
{
    Figura *kolo = new Kolo(4.0);
    Figura *kwadrat = new Prostokat(4.0);
    Figura *prostokat = new Prostokat(4.0, 2.0);
    Figura *trojkat = new Trojkat(5.0, 4.0, 3.0);

    Figura *figury[] = {kolo, kwadrat, prostokat, trojkat};

    for (int i = 0; i < 4; ++i)
    {
        std::cout << "Figura " << i + 1 << " pole: " << figury[i]->pole()
                  << ", obwod: " << figury[i]->obwod() << std::endl;
    }

    if (Kolo *k = dynamic_cast<Kolo *>(kolo))
    {
        std::cout << "Kolo dystans 10m: " << k->dystans(10) << std::endl;
    }

    for (int i = 0; i < 4; ++i)
    {
        delete figury[i];
    }
}