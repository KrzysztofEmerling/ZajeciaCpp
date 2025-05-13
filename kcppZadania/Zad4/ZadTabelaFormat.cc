#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
using String = std::string;

struct Produkt
{
    String nazwa;
    double cena;
    int ilosc;
};

void buildTab(const std::vector<Produkt> &produkty)
{

    std::cout << "|" << std::setw(15) << std::left << "Nazwa"
              << "|" << std::setw(8) << std::right << "Cena"
              << "|" << std::setw(7) << std::right << "Ilosc"
              << " |\n";

    std::cout << "|" << String(15, '-') << "|"
              << String(8, '-') << "|"
              << String(8, '-') << "|\n";

    for (const auto &p : produkty)
    {
        std::cout << "|" << std::setw(15) << std::left << p.nazwa
                  << "|" << std::setw(8) << std::right << std::fixed << std::setprecision(2) << p.cena
                  << "|" << std::setw(7) << std::right << p.ilosc
                  << " |\n";
    }
}

int main()
{
    std::vector<Produkt> produkty = {
        {"Chleb", 4.99, 5},
        {"Mleko", 3.20, 10},
        {"Jajka (10szt)", 8.50, 3}};

    std::cout << "Tabela produktów:\n";
    buildTab(produkty);
}
