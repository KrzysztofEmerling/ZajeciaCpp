// ZadOperatoryPrzypisania.cc
#include <iostream>

void OperatoryArytmetyczne()
{
    int a = 10, b = 3;

    std::cout << "Operatory Arytmetyczne:" << std::endl;
    std::cout << "a = " << a << ", b = " << b << std::endl;
    std::cout << "a + b = " << a + b << std::endl;
    std::cout << "a - b = " << a - b << std::endl;
    std::cout << "a * b = " << a * b << std::endl;
    std::cout << "a / b = " << a / b << std::endl;
    std::cout << "a % b = " << a % b << std::endl;
    std::cout << std::endl;
}

void OperatoryPrzypisania()
{
    int x = 5;

    std::cout << "Operatory Przypisania:" << std::endl;
    std::cout << "x = " << x << std::endl;

    x += 2;
    std::cout << "x += 2 => " << x << std::endl;

    x -= 1;
    std::cout << "x -= 1 => " << x << std::endl;

    x *= 3;
    std::cout << "x *= 3 => " << x << std::endl;

    x /= 2;
    std::cout << "x /= 2 => " << x << std::endl;

    x %= 4;
    std::cout << "x %= 4 => " << x << std::endl;

    std::cout << std::endl;
}

int main()
{
    OperatoryArytmetyczne();
    OperatoryPrzypisania();

    return 0;
}
