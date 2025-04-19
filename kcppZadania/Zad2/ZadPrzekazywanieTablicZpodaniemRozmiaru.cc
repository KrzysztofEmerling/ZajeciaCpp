#include <iostream>
#define ROZMIAR 5

template <size_t N>
void printTab(const int (&tab)[N])
{
    for(size_t i = 0; i < N; i++)
    {
        std::cout << "tab[" << i << "] = " << tab[i] << "\n";
    }
}

template <size_t N>
void incrementTab(int (&tab)[N], int increment)
{
    for(size_t i = 0; i < N; i++)
    {
        tab[i] += increment;
    }
}

int main()
{
    int tab[ROZMIAR];
    for( int i = 0; i < ROZMIAR; i++)
    {
        tab[i] = i;
    }

    printTab(tab);
    std::cout << "\n";
    
    incrementTab(tab, 10);
    printTab(tab);
    std::cout << std::endl;

}