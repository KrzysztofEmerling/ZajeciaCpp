
#include<iostream>
#include<string>
using String = std::string;

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
    Osoba(String sFirstName, String sLastName, int iDayOfBirth, Month eMonthOfBirth, int iYearOfBirth) :
    m_sFirstName(sFirstName), m_sLastName(sLastName), m_iDayOfBirth(iDayOfBirth), m_eMonthOfBirth(eMonthOfBirth), m_iYearOfBirth(iYearOfBirth) {}

    String GetName() { return m_sFirstName; }
    String GetSurname() { return m_sLastName; }
    String GetDateOfBirth() { return FormatedDateOfBirth(); }

    void ChengeSurname(String sSurname)
    {
        m_sLastName = sSurname;
    }

    friend std::ostream& operator<<(std::ostream& os, const Osoba& osoba);

private:
    String FormatedDateOfBirth() const 
    {
        char buffer[13];
        sprintf(buffer, "%02d.%02d.%04dr.", m_iDayOfBirth, m_eMonthOfBirth, m_iYearOfBirth);
        return static_cast<String>(buffer);
    }
};
std::ostream& operator<<(std::ostream& os, const Osoba& osoba)
{
    String sIdentity = osoba.m_sFirstName + " " + osoba.m_sLastName;
    int iAllinment = (37 - sIdentity.length());
    String sFill = "";
    if(iAllinment > 0)
    {
        for(int i = 0; i < iAllinment; i++)
        {
            sFill += " ";
        }
        sFill += "|\n";
    }
    os << "----------------------------------------\n"
       << "| "  << sIdentity << sFill
       << "|         born on " << osoba.FormatedDateOfBirth() << "         |\n"
       << "----------------------------------------\n";

    return os;
}

int main()
{
    Osoba osoby[] = {Osoba("Ala", "Makota", 3, July, 2001),
                    Osoba("Tom", "Sawyer", 23, May, 2003),
                    Osoba("Dan", "Pedro", 10, December, 1999)};

    int count = sizeof(osoby) / sizeof(osoby[0]);
    for(int i = 0; i < count; i++)
    {
        std::cout << osoby[i] << std::endl;
    }

    std::cout << "Kilka lat pozniej ...\n";
    osoby[0].ChengeSurname(osoby[0].GetSurname() + "-" + osoby[1].GetSurname());
    std::cout << osoby[0] << std::endl;
}