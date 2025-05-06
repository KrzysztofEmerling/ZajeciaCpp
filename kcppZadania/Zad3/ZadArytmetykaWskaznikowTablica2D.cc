#include <iostream>
#define ROZMIAR 5
#define ROZMIAR1 3

int main()
{
    int tab[ROZMIAR][ROZMIAR1];

    for (int i = 0; i < ROZMIAR; i++)
    {
        for (int j = 0; j < ROZMIAR1; j++)
        {
            tab[i][j] = i * ROZMIAR + j;
        }
    }

    std::cout << "Adresy elementów tablicy:\n";
    for (int i = 0; i < ROZMIAR; i++)
    {
        for (int j = 0; j < ROZMIAR1; j++)
        {
            std::cout << "&tab[" << i << "][" << j << "] = " << &tab[i][j] << "   ";
        }
        std::cout << std::endl;
    }

    return 0;
}
