#include <string>
using String = std::string;

#ifndef ZADANIE
#define ZADANIE

class Zadanie
{
private:
    String m_ID;

public:
    virtual void Present() = 0;
    inline String Info() const { return m_ID; };

protected:
    void SetID(String id);
};

#endif