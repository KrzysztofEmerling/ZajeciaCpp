#include "Zadanie.h"

void Zadanie::SetID(String nazwaPliku, String opis, int sekcja, int nr)
{
    m_Plik = nazwaPliku;
    m_Opis = opis;
    m_Sekcja = sekcja;
    m_numer = nr;
}

String Zadanie::Info() const
{
    return m_Plik + " - " + m_Opis;
}

String Zadanie::FileName() const
{
    return m_Plik;
}
