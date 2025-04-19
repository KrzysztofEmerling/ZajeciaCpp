#include <iostream>
#define ROZMIAR 5

void printTab(int tab[], size_t len)
{
    for(size_t i = 0; i < len; i++)
    {
        std::cout << "tab[" << i << "] = " << tab[i] << "\n";
    }
}

int main()
{
    int tab[ROZMIAR];
    
    // Jedyny sposób na przekazanie kopi tablicy do funkcji
    int tab_copy[ROZMIAR];

    for( int i = 0; i < ROZMIAR; i++)
    {
        tab[i] = i;
        tab_copy[i] = tab[i];
    }

    printTab(tab_copy, ROZMIAR);
    std::cout << std::endl;

}