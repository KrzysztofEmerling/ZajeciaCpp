#include <iostream>
#include <cmath>

int potega(int a, int power)
{
    int result = a;
    if(power < 0) return -1;
    else if(power == 0) return 1;
    else
    {
        for(int i = 1; i < power; i++)
        {
            result *= a;
        }
        return result;
    }
}

float potega(float a, int power)
{
    float result = a;
    if(power < 0) return -1;
    else if(power == 0) return 1;
    else
    {
        for(int i = 1; i < power; i++)
        {
            result *= a;
        }
        return result;
    }
}

float potega(float a, float power)
{
    return pow(a,power);
}

int main()
{
    std::cout << "Obliczam 2 ^ 10: " << potega(2,10) << "\n";
    std::cout << "Obliczam 2.5f ^ 5: " << potega(2.5f, 5) << "\n";
    std::cout << "Obliczam 4.0f ^ 0.5f: " << potega(4.0f, 0.5f) << "\n";
}