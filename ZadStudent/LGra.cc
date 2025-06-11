#include <iostream>
#include <random>

int main()
{
    int level = 0;
    std::cout << "Wybierz poziom trudności:\n\t-łatwy(1)\n\t-trudny(2)\n";
    std::cin >> level;
    while (level <= 0 || level > 2)
    {
        std::cout << "niepoprawnie wybrana trudność\n";
        std::cin >> level;
    }
    std::random_device rd;
    std::mt19937 gen(rd());

    int upperbound = (level == 1) ? 50 : 200;
    std::uniform_int_distribution<> dist(
        1, upperbound + 1);

    int target = dist(gen);

    int gess = -1;
    for (int i = 0; i < 10; i++)
    {
        std::cout << "Próba " << i + 1 << "\n";
        std::cout << "spróbuj zgadnąć liczbę z przedziału <1;" << upperbound << ">\n";
        std::cin >> gess;

        if (gess == target)
        {
            std::cout << "Wygrałeś!" << std::endl;
            break;
        }
        else if (gess < target)
        {
            std::cout << "Niedoszacowałeś.\n";
        }
        else
        {
            std::cout << "Przeszacowałeś.\n";
        }
    }

    if (gess != target)
    {
        std::cout << "prawidłowy wynik to:" << target << std::endl;
    }
}