#include <iostream>
#define ROZMIAR 5

int maxTabElement(const int* tab, size_t len)
{
    if(len > 0)
    {
        int max = *tab++;
        for(int i = 1; i < len; i++)
        {
            int candidat = *tab++;
            if(candidat > max)
            {
                max = candidat;
            }
        }
        return max;
    }
    return -1;
}

int main()
{
    int tab[ROZMIAR];

    for( int i = 0; i < ROZMIAR; i++)
    {
        tab[i] = i;
    }

    std::cout << "Maksymalny element tablicy: " << maxTabElement(tab, ROZMIAR) << std::endl;

}