#include <iostream>
int silnia(int n)
{
    int il = 1;

    for (int i = 2; i < n; i++)
    {
        il *= i;
    }

    return il;
}

int main()
{
    int n = -1;
    while (n < 0)
    {
        std::cout << "Podaj n (int, większe/równe zero):\n";
        std::cin >> n;
    }

    std::cout << "obliczam silnie z " << n << "\n";
    std::cout << "n! = " << silnia(n) << std::endl;
}