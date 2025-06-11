#include "Zadanie.h"

#ifndef ZADANIE5
#define ZADANIE5

class Zadanie5 : public Zadanie
{
private:
    bool CzyParzysta_lb(int val);

    bool CzyParzysta_m(int val);

    bool CzyParzysta_t(int val);

public:
    Zadanie5();
    void Present() override;
};

#endif