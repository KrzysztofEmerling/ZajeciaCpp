#include <iostream>
#include <cmath>

class Figura
{
public:
    virtual double pole() = 0;
    virtual double obwod() = 0;
};

class Prostokat : public Figura
{
private:
    double a;
    double b;

public:
    Prostokat(double a) : a(a), b(a) {}
    Prostokat(double a, double b) : a(a), b(b) {}

    double pole()
    {
        return a * b;
    }
    double obwod()
    {
        return 2 * (a + b);
    }
};

class Trojkat : public Figura
{
private:
    double a;
    double b;
    double c;

public:
    Trojkat(double a, double b, double c) : a(a), b(b), c(c) {}

    double pole()
    {
        double p = obwod() / 2;

        return sqrt(p * (p - a) * (p - b) * (p - c));
    }

    double obwod()
    {
        return a + b + c;
    }
};

class Kolo : public Figura
{
private:
    double r;
    static constexpr double PI = 3.141572;

public:
    Kolo(double r) : r(r) {}

    double pole()
    {
        return r * r * PI;
    }
    double obwod()
    {
        return 2 * PI * r;
    }

    double dystans(double pole)
    {
        // P = pi * r ^ 2

        // P / pi = r ^ 2

        // r = sqrt(P / pi)
        return sqrt(pole / PI);
    }
};

int main()
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

    // Dla funkcji specyficznej Kolo - dystans, potrzebne rzutowanie:
    if (Kolo *k = dynamic_cast<Kolo *>(kolo))
    {
        std::cout << "Kolo dystans 10m: " << k->dystans(10) << std::endl;
    }

    for (int i = 0; i < 4; ++i)
    {
        delete figury[i];
    }
}
