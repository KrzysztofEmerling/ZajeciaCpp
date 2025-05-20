#include <iostream>
#include <string>
#include <cstdlib>

#define KWADRAT(x) ((x) * (x))

#define TO_STRING(x) #x
#define LACZ(x, y) x##y

#define TRYB_TESTOWY

int main()
{
    std::cout << "Po wprowadzeniu dowolnego inputu ekran zostanie wyczyszczony:" << std::endl;
    std::cin.get();

#ifdef _WIN32
    system("cls");
#else
    system("clear");
#endif

    std::cout << "Ekran został wyczyszczony." << std::endl;
    ;

#ifdef TRYB_TESTOWY
    std::cout << "Program działa w trybie testowym (#ifdef TRYB_TESTOWY).\n";
#endif

#ifndef RELEASE
    std::cout << "Kompilacja NIE jest wersją release (#ifndef RELEASE).\n";
#endif

    int a = 5;
    std::cout << "Kwadrat liczby " << a << " to: " << KWADRAT(a) << " (z makrem)\n";

    std::cout << "TO_STRING(KWADRAT): " << TO_STRING(KWADRAT) << "\n";

    int LACZ(my, Var) = 42; // Rozszerza się do: int myVar = 42;
    std::cout << "Zmienna z ##: myVar = " << myVar << "\n";
}
