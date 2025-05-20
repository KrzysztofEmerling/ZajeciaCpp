#include <iostream>
#include <unordered_map>
int main()
{
    std::cout << "Program pobiera liczby dodatnie (int) do momentu wpisacnia 0.\n";
    std::unordered_map<int, int> umap;
    int i;
    do
    {
        std::cin >> i;
        if (i > 0)
        {
            umap[i]++;
        }
        else if (i != 0)
        {

            std::cerr << "Wprowadzona liczba musi być większa od zera\n";
        }
    } while (i != 0);

    std::cout << "Wprowadzone liczby i ich liczba wystąpień:\n";
    for (const auto &para : umap)
    {
        std::cout << "Liczba " << para.first << " wystąpiła " << para.second << " razy.\n";
    }
}