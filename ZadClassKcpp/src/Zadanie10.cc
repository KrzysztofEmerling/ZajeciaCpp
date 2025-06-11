#include "Zadanie10.h"

#include <iostream>
#include <bitset>

uint8_t Zadanie10::cstrToBits_withBitsets(char (&tab)[8])
{
    std::bitset<8> bits(tab);
    return static_cast<uint8_t>(bits.to_ulong());
}

uint8_t Zadanie10::cstrToBits(char (&tab)[8])
{
    char *start = tab;
    uint8_t value = 0U;
    for (int i = 0; i < 8; i++)
    {
        value <<= 1;
        value |= '1' == *start++;
    }
    return value;
}

Zadanie10::Zadanie10()
{
    SetID("LBitoweOperatoryLogiczneSingleVariable.cc");
}
void Zadanie10::Present()
{
    std::cout << "Podaj liczbe binarnie wprowadzajac po kolei 0 albo 1.\n";
    char tab[8];
    for (int i = 0; i < 8; i++)
    {
        std::cin >> tab[i];
        while (!(tab[i] == '1' || tab[i] == '0'))
        {
            std::cout << "Nieprawidłowo wprowadzona liczba, wprowadź 1 lub 0!\n";
            std::cin >> tab[i];
        }
    }
    uint8_t number = cstrToBits(tab);
    std::cout << "Wartość: " << static_cast<int>(number) << std::endl;
    std::cout << "Wartość: " << static_cast<int>(cstrToBits_withBitsets(tab)) << std::endl;
}