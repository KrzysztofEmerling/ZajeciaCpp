#include <iostream>

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int a = 4;
    int b = 6;

    int *a_wsk = &a;
    int *b_wsk = &b;

    std::cout << "a_wsk -> " << *a_wsk << "\n";
    std::cout << "b_wsk -> " << *b_wsk << "\n";
    std::cout << "swap()\n\n";
    swap(a_wsk, b_wsk);

    std::cout << "a_wsk -> " << *a_wsk << "\n";
    std::cout << "b_wsk -> " << *b_wsk << "\n";
    std::cout << std::endl;
}