#include <iostream>
#define PI 3.141572

int dodaj(int a, int b)
{
    return a + a;
}

float dodaj(float a, float b)
{
    return a + b;
}

std::string dodaj(std::string a, std::string b)
{
    return a + b;
}

int main()
{
    std::cout << "Obliczam dodawanie a = 2, b = 3: " << dodaj(2, 3) << "\n";
    std::cout << "Obliczam dodawanie a = 2.4f, b = 3.6f: " << dodaj(2.4f, 3.6f) << "\n";

    std::string a = "2.4";
    std::string b = "3.6";
    std::cout << "Obliczam dodawanie a = \"2.4\", b = \"3.6\": " << dodaj(a, b) << std::endl;
}