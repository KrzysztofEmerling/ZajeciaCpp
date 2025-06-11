#include "Zadanie.h"

#ifndef ZADANIE3
#define ZADANIE3

// nie da się umieścić w klasie
extern "C"
{
    unsigned long long factorial(int n, int message = 0);

    int arithmeticSum(int n, int message = 0);
}

class Zadanie3 : public Zadanie
{
private:
    double powCpp(double value, int power = 2, bool message = false);
    double MaclaurinSin(double rad, bool message = false);
    double MaclaurinCos(double rad, bool message = false);

public:
    Zadanie3();
    void Present() override;
};

#endif