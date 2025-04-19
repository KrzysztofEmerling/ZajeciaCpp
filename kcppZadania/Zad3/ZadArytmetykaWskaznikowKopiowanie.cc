#include <iostream>
#define ROZMIAR 5

void printTab(const int tab[], size_t len)
{
    for(size_t i = 0; i < len; i++)
    {
        std::cout << "tab[" << i << "] = " << tab[i] << "\n";
    }
}

void copyTab(const int *tab, size_t len, int *&copy)
{
    copy = new int[len];
    int *tab2 = copy;

    for(int i = 0; i < len; i++)
    {
        *tab2++ = *tab++;
    }
}

int main()
{
    int tab[ROZMIAR];

    for( int i = 0; i < ROZMIAR; i++)
    {
        tab[i] = i;
    }

    int *copy;
    copyTab(tab,ROZMIAR,copy);
    printTab(copy,ROZMIAR);
}