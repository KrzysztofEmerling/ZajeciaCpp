#include <iostream>

int main()
{
    int offset;

    int h = -1;
    int w = 1;
    while (h < 2)
    {
        std::cout << "Podaj wysokość piramidy (int, większe od 1):\n";
        std::cin >> h;
    }
    std::cout << std::endl;
    offset = h - 1;
    for (int i = 1; i <= h; i++)
    {
        for (int j = 0; j < offset; j++)
        {
            std::cout << " ";
        }
        --offset;

        for (int j = 0; j < w; j++)
        {
            std::cout << i;
        }
        std::cout << std::endl;
        w += 2;
    }
}