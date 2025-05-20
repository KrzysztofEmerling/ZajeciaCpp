#include <iostream>

int main()
{
    int i = 0;
    std::cout << "Petla while z i++\n";
    while (i++ < 10)
    {
        std::cout << i << ", ";
    }
    std::cout << "\n";

    i = 0;
    std::cout << "Petla while z ++i\n";
    while (i++ < 10)
    {
        std::cout << i << ", ";
    }
    std::cout << "\n";

    i = 0;
    std::cout << "Petla do-while z i++\n";
    do
    {
        std::cout << i << ", ";
    } while (i++ < 10);
    std::cout << "\n";

    i = 0;
    std::cout << "Petla do-while z ++i\n";
    do
    {
        std::cout << i << ", ";
    } while (i++ < 10);
    std::cout << "\n";

    std::cout << "Petla for z i++\n";
    for (int j = 0; j < 10; j++)
    {
        std::cout << j << ", ";
    }
    std::cout << "\n";

    std::cout << "Petla for z ++i\n";
    for (int j = 0; j < 10; ++j)
    {
        std::cout << j << ", ";
    }
    std::cout << std::endl;
}