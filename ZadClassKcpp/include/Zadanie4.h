#include "Zadanie.h"

#ifndef ZADANIE4
#define ZADANIE4

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
    Prostokat(double a);
    Prostokat(double a, double b);

    double pole();
    double obwod();
};

class Trojkat : public Figura
{
private:
    double a;
    double b;
    double c;

public:
    Trojkat(double a, double b, double c);
    double pole();
    double obwod();
};

class Kolo : public Figura
{
private:
    double r;
    static constexpr double PI = 3.141572;

public:
    Kolo(double r);

    double pole();
    double obwod();

    double dystans(double pole);
};

class Zadanie4 : public Zadanie
{
public:
    Zadanie4();
    void Present() override;
};

#endif