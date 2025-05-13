#include <iostream>
#include <fstream>
#include <string>

int main()
{
    std::cout << "Zapisuje zdanie do pliku plik1.txt\n";

    std::ofstream oplik("plik1.txt");
    if (!oplik.is_open())
    {
        std::cerr << "Nie można otworzyć pliku do zapisu: plik1.txt\n";
        return 1;
    }

    oplik << "Bardzo proste zdanie." << std::endl;
    oplik.close();

    std::ifstream iplik("plik1.txt");
    std::cout << "Otwieram plik plik1.txt:\n";

    if (!iplik.is_open())
    {
        std::cerr << "Nie można otworzyć pliku do odczytu: plik1.txt\n";
        return 1;
    }

    std::string linia;
    while (std::getline(iplik, linia))
    {
        std::cout << linia << std::endl;
    }

    iplik.close();

    iplik.open("nieistniejacy_plik.txt");
    std::cout << "Otwieram niejistniejący plik:\n";

    if (!iplik.is_open())
    {
        std::cerr << "Nie można otworzyć pliku do odczytu: nieistniejacy_plik.txt\n";
        return 1;
    }

    while (std::getline(iplik, linia))
    {
        std::cout << linia << std::endl;
    }

    iplik.close();
}
