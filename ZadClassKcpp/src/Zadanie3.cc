#include "Zadanie3.h"

#include <iostream>
#include <cmath>
#include <cstring>
#include <cstdlib>
#include <stdio.h>
extern "C"
{

    unsigned long long factorial(int n, int message)
    {
        if (message == 1)
            printf("Obliczam silnie w C\n");

        if (n < 0)
            return 0;
        if (n == 0 || n == 1)
            return 1;
        return n * factorial(n - 1);
    }

    int arithmeticSum(int n, int message)
    {
        if (message == 1)
            printf("Obliczam sume ciagu arytmetycznego w C\n");

        if (n < 1)
            return 0;
        return n * (n + 1) / 2;
    }
}
double Zadanie3::powCpp(double value, int power, bool message)
{
    if (message)
        std::cout << "Obliczam potęgę w C++" << std::endl;

    if (power < 0)
        return nan("");
    else if (power == 0)
        return 1;
    else
    {
        double result = value;
        for (int i = 1; i < power; i++)
        {
            result *= value;
        }
        return result;
    }
}

double Zadanie3::MaclaurinSin(double rad, bool message)
{
    if (message)
        std::cout << "Obliczam sin w C++" << std::endl;

    return rad - powCpp(rad, 3) / 6 + powCpp(rad, 5) / 120;
}

double Zadanie3::MaclaurinCos(double rad, bool message)
{
    if (message)
        std::cout << "Obliczam cos w C++" << std::endl;

    return 1 - powCpp(rad, 2) / 2 + powCpp(rad, 4) / 24;
}

Zadanie3::Zadanie3()
{
    SetID("ZadMainExample.cc (1.3) - Zadanie pokazuje użycie bloku extern (poza klasą), musiało zostać zmodyfikowane z braku możliwości przekazania argv.");
}
void Zadanie3::Present()
{
    int argc;
    std::cout << "Funkcja nie jest wywoływana w main, (brak możliwości pobrania argc, argv) podaj ilość funkcji do wywołania i nazwy tych funkcji\n";
    std::cout << "podaj ilość funkcji do wywołania:\n";
    std::cin >> argc;
    ++argc;

    if (argc < 2)
    {
        std::cout << "Podaj nazwy funkcji do wykonania jako argumenty:" << std::endl;
        std::cout << "pow MaclaurinSin MaclaurinCos factorial arithmeticSum" << std::endl;
        return;
    }

    char **argv = new char *[argc + 1];
    argv[0] = const_cast<char *>("program");
    std::cout << "Podaj nazwy funkcji (po jednej na raz):\n";
    for (int i = 1; i < argc; ++i)
    {
        static char buffer[100];
        std::cin >> buffer;
        argv[i] = new char[strlen(buffer) + 1];
        strcpy(argv[i], buffer);
    }
    double rad = 0.5;
    int n = 5;

    for (int i = 1; i < argc; i++)
    {
        if (strcmp(argv[i], "pow") == 0)
        {
            double res = powCpp(rad, 3, true);
            std::cout << "pow(" << rad << ", 3) = " << res << std::endl;
        }
        else if (strcmp(argv[i], "MaclaurinSin") == 0)
        {
            double res = MaclaurinSin(rad, true);
            std::cout << "MaclaurinSin(" << rad << ") = " << res << std::endl;
        }
        else if (strcmp(argv[i], "MaclaurinCos") == 0)
        {
            double res = MaclaurinCos(rad, true);
            std::cout << "MaclaurinCos(" << rad << ") = " << res << std::endl;
        }
        else if (strcmp(argv[i], "factorial") == 0)
        {
            unsigned long long res = factorial(n, 1);
            std::cout << "factorial(" << n << ") = " << res << std::endl;
        }
        else if (strcmp(argv[i], "arithmeticSum") == 0)
        {
            int res = arithmeticSum(n, 1);
            std::cout << "arithmeticSum(" << n << ") = " << res << std::endl;
        }
        else
        {
            std::cout << "Nieznana funkcja: " << argv[i] << std::endl;
        }
    }
}