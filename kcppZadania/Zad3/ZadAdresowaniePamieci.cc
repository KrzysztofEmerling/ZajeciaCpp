#include <iostream>
/*
-adresowanie pamięci są przydzielane po sobie rosnąco
-adresy potrzebują tyle miejsca ile wymaga deklarowana zmienna
-w przypadku gdy fragment pamięci niepozwalałby na zarezerwowanie wystarczającej pamięci adres zostanie zarezerwowany dalej (w momencie znaleziemia miejsca z wystarczającą ilością bajtów dla zmiennej)
*/
int main()
{
    int a = 10;
    int b = 20;
    int c = 30;

    // Wypisujemy adresy zmiennych
    std::cout << "Adres a: " << &a << std::endl;
    std::cout << "Adres b: " << &b << std::endl;
    std::cout << "Adres c: " << &c << std::endl;

    return 0;
}
