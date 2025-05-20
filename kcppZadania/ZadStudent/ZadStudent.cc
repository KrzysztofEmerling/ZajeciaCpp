#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring>

struct student
{
    int nr_album;
    char imie[60];
    char nazwisko[60];
};

void dodajStudenta(std::vector<student> &baza)
{
    student s;
    std::cout << "Podaj numer albumu: ";
    std::cin >> s.nr_album;
    std::cout << "Podaj imię: ";
    std::cin >> s.imie;
    std::cout << "Podaj nazwisko: ";
    std::cin >> s.nazwisko;
    baza.push_back(s);
    std::cout << "Dodano studenta.\n";
}

void usunStudenta(std::vector<student> &baza)
{
    int nr;
    std::cout << "Podaj numer albumu studenta do usunięcia: ";
    std::cin >> nr;

    auto it = std::remove_if(baza.begin(), baza.end(), [nr](const student &s)
                             { return s.nr_album == nr; });

    if (it != baza.end())
    {
        baza.erase(it, baza.end());
        std::cout << "Usunięto studenta.\n";
    }
    else
    {
        std::cout << "Nie znaleziono studenta.\n";
    }
}

void wyswietlListe(const std::vector<student> &baza)
{
    if (baza.empty())
    {
        std::cout << "Lista studentów jest pusta.\n";
        return;
    }

    for (const auto &s : baza)
    {
        std::cout << "Album: " << s.nr_album
                  << ", Imię: " << s.imie
                  << ", Nazwisko: " << s.nazwisko << '\n';
    }
}

void sortujListe(std::vector<student> &baza)
{
    std::sort(baza.begin(), baza.end(), [](const student &a, const student &b)
              { return std::strcmp(a.nazwisko, b.nazwisko) < 0; });

    std::cout << "Posortowano listę studentów alfabetycznie po nazwisku.\n";
}

void sprawdzStudenta(const std::vector<student> &baza)
{
    int nr;
    std::cout << "Podaj numer albumu do sprawdzenia: ";
    std::cin >> nr;

    for (const auto &s : baza)
    {
        if (s.nr_album == nr)
        {
            std::cout << "Znaleziono: " << s.imie << " " << s.nazwisko << '\n';
            return;
        }
    }

    std::cout << "Nie znaleziono studenta o podanym numerze albumu.\n";
}

int main()
{
    std::vector<student> baza;
    bool programIsRunning = true;
    int action;

    while (programIsRunning)
    {
        std::cout << "\nWybierz czynność do wykonania:\n"
                  << "\t1 - Dodaj studenta\n"
                  << "\t2 - Usuń studenta\n"
                  << "\t3 - Wyświetl listę\n"
                  << "\t4 - Sortuj listę (alfabetycznie)\n"
                  << "\t5 - Sprawdź, czy student istnieje\n"
                  << "\t6 - Zakończ działanie\n"
                  << "Twoja opcja: ";
        std::cin >> action;

        switch (action)
        {
        case 1:
            dodajStudenta(baza);
            break;
        case 2:
            usunStudenta(baza);
            break;

        case 4:
            sortujListe(baza);
        case 3:
            wyswietlListe(baza);
            break;

        case 5:
            sprawdzStudenta(baza);
            break;
        case 6:
            programIsRunning = false;
            std::cout << "Zamykanie programu...\n";
            break;
        default:
            std::cout << "Niepoprawna opcja, spróbuj ponownie.\n";
            break;
        }
    }

    return 0;
}
