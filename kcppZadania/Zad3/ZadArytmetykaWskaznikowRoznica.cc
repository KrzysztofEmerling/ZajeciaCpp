#include <iostream>
#define ROZMIAR 10

int main()
{
    int tab[ROZMIAR];

    for( int i = 0; i < ROZMIAR; i++)
    {
        tab[i] = i;
    }
    int index_1 = 2;
    int index_2 = 9;

    int *wsk1 = &tab[index_1];
    int *wsk2 = &tab[index_2];

    std::cout << "Wsk1 wskazuje na element: " << *wsk1 << "(o indeksie: "<< index_1 <<")\n";
    std::cout << "Wsk2 wskazuje na element: " << *wsk2 << "(o indeksie: "<< index_2 <<")\n";
    std::cout << "wsk2 - wsk1 = " << int(wsk1 - wsk2) << std::endl;
}