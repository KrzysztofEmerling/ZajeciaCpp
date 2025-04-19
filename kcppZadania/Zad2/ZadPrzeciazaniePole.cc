#include <iostream>
#define PI 3.141572

float pole(float a)
{
    return a * a;
}

float pole(float a, float b)
{
    return a * b;
}

double pole(double r)
{
    return PI * r * r;
}

int main()
{
    std::cout << "Obliczam pole kwadratu, a = 2.4f: " << pole(2.4f) << "\n";
    std::cout << "Obliczam pole prostokątu, a = 2.4f, b = 1.6f: " << pole(2.4f, 1.6f) << "\n";
    std::cout << "Obliczam pole koła, r = 2.3: " << pole(2.3) << std::endl;
}