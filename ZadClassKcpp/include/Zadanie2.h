#include "Zadanie.h"

#ifndef ZADANIE2
#define ZADANIE2

enum Month
{
    January = 1,
    February,
    March,
    April,
    May,
    June,
    July,
    August,
    September,
    October,
    November,
    December
};

class Osoba
{
private:
    String m_sFirstName;
    String m_sLastName;

    int m_iDayOfBirth;
    Month m_eMonthOfBirth;
    int m_iYearOfBirth;

public:
    Osoba(String sFirstName, String sLastName, int iDayOfBirth, Month eMonthOfBirth, int iYearOfBirth);

    String GetName();
    String GetSurname();
    String GetDateOfBirth();

    void ChengeSurname(String sSurname);

    friend std::ostream &operator<<(std::ostream &os, const Osoba &osoba);

private:
    String FormatedDateOfBirth() const;
};

class Zadanie2 : public Zadanie
{
public:
    Zadanie2();
    void Present() override;
};

#endif