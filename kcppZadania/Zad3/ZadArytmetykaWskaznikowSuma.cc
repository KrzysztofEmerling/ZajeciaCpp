#include <iostream>
#define ROZMIAR 5

int sumTabElements(const int* tab, size_t len)
{
    int sum = 0;
    for(int i = 0; i < len; i++)
    {
        sum += *tab++;
    }
    return sum;
}

int main()
{
    int tab[ROZMIAR];

    for( int i = 0; i < ROZMIAR; i++)
    {
        tab[i] = i;
    }

    std::cout << "Suma elementow tablicy: " << sumTabElements(tab, ROZMIAR) << std::endl;

}