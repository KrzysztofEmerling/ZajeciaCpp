#include "Zadanie2.h"
#include <iostream>

Osoba::Osoba(String sFirstName, String sLastName, int iDayOfBirth, Month eMonthOfBirth, int iYearOfBirth) : m_sFirstName(sFirstName), m_sLastName(sLastName), m_iDayOfBirth(iDayOfBirth), m_eMonthOfBirth(eMonthOfBirth), m_iYearOfBirth(iYearOfBirth) {}

String Osoba::FormatedDateOfBirth() const
{
    char buffer[13];
    sprintf(buffer, "%02d.%02d.%04dr.", m_iDayOfBirth, m_eMonthOfBirth, m_iYearOfBirth);
    return static_cast<String>(buffer);
}

std::ostream &operator<<(std::ostream &os, const Osoba &osoba)
{
    os << osoba.m_sFirstName << " " << osoba.m_sLastName
       << " born on " << osoba.FormatedDateOfBirth();
    return os;
}

Zadanie2::Zadanie2()
{
    SetID("ZadEnumExample.cc");
}
void Zadanie2::Present()
{
    Osoba osoby[] = {Osoba("Ala", "Makota", 3, July, 2001),
                     Osoba("Tom", "Sawyer", 23, May, 2003),
                     Osoba("Dan", "Pedro", 10, December, 1999)};

    int count = sizeof(osoby) / sizeof(osoby[0]);
    for (int i = 0; i < count; i++)
    {
        std::cout << osoby[i] << std::endl;
    }
}