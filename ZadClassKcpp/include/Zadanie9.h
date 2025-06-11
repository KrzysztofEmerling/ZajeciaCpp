#include "Zadanie.h"

#ifndef ZADANIE9
#define ZADANIE9

class Zadanie9 : public Zadanie
{
private:
    static constexpr size_t ROZMIAR = 5;
    template <size_t N>
    void printTab(const int (&tab)[N]);

    template <size_t N>
    void incrementTab(int (&tab)[N], int increment);

public:
    Zadanie9();
    void Present() override;
};

#endif