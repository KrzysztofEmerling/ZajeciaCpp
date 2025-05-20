#include <iostream>
#include <cstdint>

template <std::size_t N>
constexpr uint64_t hash(const char (&word)[N])
{
    constexpr std::size_t max_len = (N - 1 < 8) ? N - 1 : 8;
    uint64_t result = 0;
    for (std::size_t i = 0; i < max_len; ++i)
    {
        result |= static_cast<uint64_t>(word[i]) << (8 * i);
    }
    return result;
}

bool CzyParzysta_lb(int val)
{
    return !(val & 1);
}

bool CzyParzysta_m(int val)
{
    return val % 2 == 0;
}

bool CzyParzysta_t(int val)
{
    return (val & 1) ? false : true;
}

int main()
{
    char buff[9] = {};
    std::cout << "Wybierz jedną z opcji: \"BitOp\", \"Modulo\", \"Tanor\"\n";
    std::cin >> buff;

    int parzysta = 4;
    int nieparzysta = 7;

    switch (hash(buff))
    {
    case hash("BitOp"):
        std::cout << "Sprawdzam czy " << parzysta << " jest parzysta (operacją bitową): " << CzyParzysta_lb(parzysta) << "\n";
        std::cout << "Sprawdzam czy " << nieparzysta << " jest parzysta (operacją bitową): " << CzyParzysta_lb(nieparzysta) << std::endl;
        break;

    case hash("Modulo"):
        std::cout << "Sprawdzam czy " << parzysta << " jest parzysta (operacją modulo): " << CzyParzysta_m(parzysta) << "\n";
        std::cout << "Sprawdzam czy " << nieparzysta << " jest parzysta (operacją modulo): " << CzyParzysta_m(nieparzysta) << std::endl;
        break;

    case hash("Tanor"):
        std::cout << "Sprawdzam czy " << parzysta << " jest parzysta (tanor operation): " << CzyParzysta_t(parzysta) << "\n";
        std::cout << "Sprawdzam czy " << nieparzysta << " jest parzysta (tanor operation): " << CzyParzysta_t(nieparzysta) << std::endl;
        break;

    default:
        std::cout << "Podałeś: " << buff << std::endl;
    }

    return 0;
}
