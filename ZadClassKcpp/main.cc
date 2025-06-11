#include "Zadanie1.h"
#include "Zadanie2.h"
#include "Zadanie3.h"
#include "Zadanie4.h"
#include "Zadanie5.h"
#include "Zadanie6.h"
#include "Zadanie7.h"
#include "Zadanie8.h"
#include "Zadanie9.h"
#include "Zadanie10.h"

#include <iostream>
#include <vector>
#include <memory>
#include <algorithm>
#include <map>

int main()
{
    bool isRunning = true;
    std::vector<std::unique_ptr<Zadanie>> zadania;

    zadania.push_back(std::make_unique<Zadanie1>());
    zadania.push_back(std::make_unique<Zadanie2>());
    zadania.push_back(std::make_unique<Zadanie3>());
    zadania.push_back(std::make_unique<Zadanie4>());
    zadania.push_back(std::make_unique<Zadanie5>());
    zadania.push_back(std::make_unique<Zadanie6>());
    zadania.push_back(std::make_unique<Zadanie7>());
    zadania.push_back(std::make_unique<Zadanie8>());
    zadania.push_back(std::make_unique<Zadanie9>());
    zadania.push_back(std::make_unique<Zadanie10>());

    std::map<int, std::vector<Zadanie *>> sekcje;
    for (const auto &zad : zadania)
    {
        sekcje[zad->GetSection()].push_back(zad.get());
    }

    while (isRunning)
    {
        std::cout << "\n--- Dostępne sekcje ---\n";
        for (const auto &[sekcja, zad] : sekcje)
        {
            std::vector<Zadanie *> sortedZad = zad;
            std::sort(sortedZad.begin(), sortedZad.end(), [](Zadanie *a, Zadanie *b)
                      { return a->GetNumber() < b->GetNumber(); });

            std::cout << "Sekcja " << sekcja << ":\n";
            for (const auto &zad : sortedZad)
            {
                std::cout << "  [" << zad->GetNumber() << "] " << zad->FileName() << '\n';
            }
            std::cout << "\n";
        }

        std::cout << "Wybierz sekcję (-1 - wyjście): ";
        int wyborSekcji;
        std::cin >> wyborSekcji;

        if (wyborSekcji == -1)
        {
            isRunning = false;
            continue;
        }

        if (sekcje.find(wyborSekcji) == sekcje.end())
        {
            std::cout << "Nieprawidłowa sekcja.\n";
            continue;
        }

        bool wSekcji = true;
        while (wSekcji)
        {
            std::vector<Zadanie *> zadaniaWSekcji = sekcje[wyborSekcji];
            std::sort(zadaniaWSekcji.begin(), zadaniaWSekcji.end(), [](Zadanie *a, Zadanie *b)
                      { return a->GetNumber() < b->GetNumber(); });

            std::cout << "\n--- Zadania w sekcji " << wyborSekcji << " ---\n";
            for (const auto &z : zadaniaWSekcji)
            {
                std::cout << "[" << z->GetNumber() << "] " << z->Info() << "\n";
            }

            std::cout << "\nWybierz numer zadania (-1 - powrót): ";
            int wyborZadania;
            std::cin >> wyborZadania;

            if (wyborZadania == -1)
            {
                wSekcji = false;
                continue;
            }

            auto it = std::find_if(zadaniaWSekcji.begin(), zadaniaWSekcji.end(),
                                   [wyborZadania](Zadanie *z)
                                   { return z->GetNumber() == wyborZadania; });

            if (it != zadaniaWSekcji.end())
            {
                std::cout << "\n--- Prezentacja zadania ---\n";
                (*it)->Present();
            }
            else
            {
                std::cout << "Nie znaleziono zadania o takim numerze.\n";
            }
        }
    }

    std::cout << "Koniec programu.\n";
    return 0;
}
