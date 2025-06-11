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

void WypiszInfo(const std::vector<std::unique_ptr<Zadanie>> &zadania)
{
    std::cout << "Wybierz numer zadania do wywołania Present() lub 0 aby wyjść:\n";
    for (size_t i = 0; i < zadania.size(); ++i)
    {
        std::cout << i + 1 << ". " << zadania[i]->Info() << "\n";
    }
    std::cout << "0. Wyjście\n";
}

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

    while (isRunning)
    {
        WypiszInfo(zadania);

        int wybor;
        std::cin >> wybor;

        if (wybor == 0)
        {
            std::cout << "Koniec programu.\n";
            isRunning = false;
        }

        if (wybor < 1 || wybor > (int)zadania.size())
        {
            std::cout << "Nieprawidłowy numer zadania, spróbuj ponownie.\n";
            continue;
        }

        zadania[wybor - 1]->Present();
    }
}
