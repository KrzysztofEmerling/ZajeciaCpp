#include <iostream>
#include <iomanip>
#include <string>

using String = std::string;

int main()
{
    const double pi = 3.14159;
    const double e = 2.71828;
    const double phi = 1.61803;

    std::cout << std::setw(20) << std::left << "Stała"
              << std::setw(24) << std::left << "Wartość (domyślnie)"
              << std::setw(20) << std::left << "Notacja stała"
              << std::setw(20) << std::left << "Notacja naukowa"
              << std::endl;

    std::cout << std::setw(19) << std::left << "--------"
              << std::setw(21) << std::left << "------------------"
              << std::setw(19) << std::left << "-------------"
              << std::setw(20) << std::left << "--------------"
              << std::endl;

    std::cout << std::setw(20) << std::left << "Pi"
              << std::setw(20) << std::left << pi
              << std::setw(20) << std::left << std::fixed << std::setprecision(6) << pi
              << std::setw(20) << std::left << std::scientific << std::setprecision(6) << pi
              << std::endl;

    std::cout << std::setw(20) << std::left << "e"
              << std::setw(20) << std::left << std::defaultfloat << e
              << std::setw(20) << std::left << std::fixed << std::setprecision(6) << e
              << std::setw(20) << std::left << std::scientific << std::setprecision(6) << e
              << std::endl;

    std::cout << std::setw(22) << std::left << "Złoty podział"
              << std::setw(20) << std::left << std::defaultfloat << phi
              << std::setw(20) << std::left << std::fixed << std::setprecision(6) << phi
              << std::setw(20) << std::left << std::scientific << std::setprecision(6) << phi
              << std::endl;
}
