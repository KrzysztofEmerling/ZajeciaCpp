#include <iostream>
#define ROZMIAR 10

int sumTabElements(const int *tab, size_t len)
{
    int sum = 0;
    for (int i = 0; i < len; i++)
    {
        sum += *tab++;
    }
    return sum;
}

int maxTabElements(const int *tab, size_t len)
{
    int max = *tab++;
    for (int i = 1; i < len; i++)
    {
        int temp = *tab++;
        if (temp > max)
            max = temp;
    }
    return max;
}

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void reverse(int *tab, size_t len)
{
    if (len > 1)
    {
        int *start = tab;
        int *end = tab + len - 1;

        while (start < end)
        {
            int tmp = *start;
            *start = *end;
            *end = tmp;

            start++;
            end--;
        }
    }
}

void printTab(const int tab[], size_t len)
{
    for (size_t i = 0; i < len; i++)
    {
        std::cout << "tab[" << i << "] = " << tab[i] << "\n";
    }
}
int main()
{
    int tab[ROZMIAR];

    for (int i = 0; i < ROZMIAR; i++)
    {
        tab[i] = i;
    }

    std::cout << "Suma elementow tablicy: " << sumTabElements(tab, ROZMIAR) << std::endl;
    std::cout << "Max z elementow tablicy: " << maxTabElements(tab, ROZMIAR) << std::endl;
    reverse(tab, ROZMIAR);
    std::cout << "Elementy tablicy po odwróceniu:\n";
    printTab(tab, ROZMIAR);
}