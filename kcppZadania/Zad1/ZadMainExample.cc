#include <iostream>
#include <cmath>
#include <cstring>
#include <cstdlib> 

#include<stdio.h>

double powCpp(double value, int power = 2, bool message = false)
{
    if(message) std::cout << "Obliczam potęgę w C++" << std::endl;

    if(power < 0) return nan("");
    else if(power == 0) return 1;
    else
    {
        double result = value;
        for(int i = 1; i < power; i++)
        {
            result *= value;
        }
        return result;
    }
}

double MaclaurinSin(double rad, bool message = false)
{
    if(message) std::cout << "Obliczam sin w C++" << std::endl;

    return rad - powCpp(rad, 3) / 6 + powCpp(rad, 5) / 120;
}

double MaclaurinCos(double rad, bool message = false)
{
    if(message) std::cout << "Obliczam cos w C++" << std::endl;

    return 1 - powCpp(rad, 2) / 2 + powCpp(rad, 4) / 24;
}

extern "C" {

unsigned long long factorial(int n, int message = 0)
{
    if(message == 1) printf("Obliczam silnie w C\n");

    if (n < 0) return 0; 
    if (n == 0 || n == 1) return 1;
    return n * factorial(n - 1);
}

int arithmeticSum(int n, int message = 0)
{
    if(message == 1) printf("Obliczam sume ciagu arytmetycznego w C\n");

    if (n < 1) return 0;
    return n * (n + 1) / 2;
}

} 

int main(int argc, char **argv)
{
    if(argc < 2)
    {
        std::cout << "Podaj nazwy funkcji do wykonania jako argumenty:" << std::endl;
        std::cout << "pow MaclaurinSin MaclaurinCos factorial arithmeticSum" << std::endl;
        return 1;
    }

    // Przykładowa wartość do obliczeń
    double rad = 0.5; 
    int n = 5;

    for(int i = 1; i < argc; i++)
    {
        if(strcmp(argv[i], "pow") == 0)
        {
            double res = powCpp(rad, 3, true);
            std::cout << "pow(" << rad << ", 3) = " << res << std::endl;
        }
        else if(strcmp(argv[i], "MaclaurinSin") == 0)
        {
            double res = MaclaurinSin(rad, true);
            std::cout << "MaclaurinSin(" << rad << ") = " << res << std::endl;
        }
        else if(strcmp(argv[i], "MaclaurinCos") == 0)
        {
            double res = MaclaurinCos(rad, true);
            std::cout << "MaclaurinCos(" << rad << ") = " << res << std::endl;
        }
        else if(strcmp(argv[i], "factorial") == 0)
        {
            unsigned long long res = factorial(n, 1);
            std::cout << "factorial(" << n << ") = " << res << std::endl;
        }
        else if(strcmp(argv[i], "arithmeticSum") == 0)
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
