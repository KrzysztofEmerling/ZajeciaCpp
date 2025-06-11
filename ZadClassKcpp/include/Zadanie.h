#include <string>
using String = std::string;

#ifndef ZADANIE
#define ZADANIE

class Zadanie
{
private:
    String m_Plik;
    String m_Opis;

    int m_Sekcja;
    int m_numer;

public:
    virtual void Present() = 0;
    inline int GetSection() const { return m_Sekcja; };
    inline int GetNumber() const { return m_numer; };
    String Info() const;
    String FileName() const;

protected:
    void SetID(String nazwaPliku, String opis, int sekcja, int nr);
};

#endif