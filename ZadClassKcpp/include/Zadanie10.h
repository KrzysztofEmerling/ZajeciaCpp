#include "Zadanie.h"
#include <cstdint>

#ifndef ZADANIE10
#define ZADANIE10

class Zadanie10 : public Zadanie
{
private:
    uint8_t cstrToBits_withBitsets(char (&tab)[8]);
    uint8_t cstrToBits(char (&tab)[8]);

public:
    Zadanie10();
    void Present() override;
};

#endif