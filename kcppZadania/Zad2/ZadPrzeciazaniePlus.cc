#include <iostream>

class Punkt
{
private:
    float m_x;
    float m_y;
public:
    Punkt(): m_x(0), m_y(0) {}
    Punkt(float x, float y): m_x(x), m_y(y){}

    float getX() {return m_x;}
    float getY() {return m_y;}

    void setX(float x) {m_x = x;}
    void setY(float y) {m_y = y;}

    void setXY(float x, float y) 
    {
        m_x = x;
        m_y = y;
    }

    Punkt operator+(const Punkt& other) const
    {
        return Punkt(m_x + other.m_x, m_y + other.m_y);
    }

    Punkt operator+(const float& other) const
    {
        return Punkt(m_x + other, m_y + other);
    }

};

int main()
{
    Punkt p1(1.0f, 2.0f);
    Punkt p2(3.0f, 4.0f);

    Punkt p3 = p1 + p2;

    std::cout << "p1.x = " << p1.getX() << ", p1.y = " << p1.getY() << "\n";
    std::cout << "p2.x = " << p2.getX() << ", p2.y = " << p2.getY() << "\n""\n";

    std::cout << "p3 = p1 + p2\np3.x = " << p3.getX() << ", p3.y = " << p3.getY() << "\n\n";
    
    Punkt p4 = p1 + 2.5f;
    std::cout << "p4 + 2.5f\np4.x = " << p4.getX() << ", p4.y = " << p4.getY() << std::endl;
}