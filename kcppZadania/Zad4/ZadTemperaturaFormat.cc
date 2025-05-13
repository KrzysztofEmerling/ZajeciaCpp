#include <iostream>
#include <iomanip>

inline double C2F(double c)
{
    return c * 9.0 / 5.0 + 32.0;
}

int main()
{

    std::cout << std::setw(8) << std::right << "Celsjusz"
              << "   "
              << std::setw(11) << std::right << "Fahrenheit"
              << "\n";

    std::cout << std::setw(8) << std::right << "--------"
              << "    "
              << std::setw(9) << std::right << "----------"
              << "\n";

    for (int c = -10; c <= 10; c += 5)
    {
        double f = c * 9.0 / 5.0 + 32.0;
        std::cout << std::setw(7) << std::right << c
                  << "    "
                  << std::setw(9) << std::right << std::fixed << std::setprecision(2) << f
                  << "\n";
    }
}
