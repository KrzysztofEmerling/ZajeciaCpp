#include <iostream>
#define ROZMIAR 5

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void rshiftTab(int* tab, size_t len)
{
    if(len > 1)
    {
        int* first = tab++;
        for(int i = 2; i < len; i++)
        {
            *tab++ = *tab;
        }
        swap(first, tab);
    }
}

void printTab(const int tab[], size_t len)
{
    for(size_t i = 0; i < len; i++)
    {
        std::cout << "tab[" << i << "] = " << tab[i] << "\n";
    }
}



int main()
{
    int tab[ROZMIAR];

    for( int i = 0; i < ROZMIAR; i++)
    {
        tab[i] = i;
    }

    std::cout << "Przed przesunieciem:\n";
    printTab(tab, ROZMIAR);

    rshiftTab(tab, ROZMIAR);

    std::cout << "Po przesunieciu:\n";
    printTab(tab, ROZMIAR);
    std::cout << std::endl;

}