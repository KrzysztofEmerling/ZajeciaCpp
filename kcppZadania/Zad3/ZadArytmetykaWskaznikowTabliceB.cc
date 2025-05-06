#include <iostream>
#define ROZMIAR 5

void sumTabs(const float *tab1, const float *tab2, float *tabOut, size_t len)
{
    for (int i = 0; i < len; i++)
    {
        *tabOut++ = *tab1++ + *tab2++;
    }
}

void fillTab(float *tab, size_t len)
{
    std::cout << "Podaj 5 elementów tablicy (float):\n";
    for (int i = 0; i < len; i++)
    {
        std::cin >> *tab++;
    }
}

void printTab(const float tab[], size_t len)
{
    for (size_t i = 0; i < len; i++)
    {
        std::cout << "tab[" << i << "] = " << tab[i] << "\n";
    }
}
int main()
{
    float tab[ROZMIAR];
    float in[ROZMIAR];
    float out[ROZMIAR];

    for (int i = 0; i < ROZMIAR; i++)
    {
        tab[i] = i;
    }
    fillTab(in, ROZMIAR);

    std::cout << "Suma tablic:\n";
    sumTabs(tab, in, out, ROZMIAR);
    printTab(out, ROZMIAR);
}