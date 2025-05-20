#include <iostream>

int main()
{
    std::cout << "Pętla for do 30: (nieparzyste):" << std::endl;
    for (int i = 1; i < 30; i += 2)
    {
        char spacer[3] = ", ";
        std::cout << i << spacer;
    }

    std::cout << "\nPętla for do 30: (i % 7 == 0):" << std::endl;
    for (int i = 0; i < 30; i += 7)
    {
        char spacer[3] = ", ";
        std::cout << i << spacer;
    }
    std::cout << std::endl;
}