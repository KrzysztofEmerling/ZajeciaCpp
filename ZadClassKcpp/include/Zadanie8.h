#include "Zadanie.h"

#ifndef ZADANIE8
#define ZADANIE8

class Zadanie8 : public Zadanie
{
private:
    static constexpr double PI = 3.141572;
    double calculateCircleArea_przezWartosc(double r);
    void calculateCircleArea_przezReferencje(double r, double &area);
    void calculateCircleArea_przezWskaznik(double r, double *area);
    void calculateCircleAreas(double Rs[], size_t len, double *&areas);

public:
    Zadanie8();
    void Present() override;
};

#endif