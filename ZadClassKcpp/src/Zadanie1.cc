#include "Zadanie1.h"
#include <iostream>

Zadanie1::Zadanie1()
{
    SetID("ZadStringExample.cc");
}

void Zadanie1::Present()
{
    String str = "Hello, World!";
    String str1 = "C++ Programming";
    String str2 = "";

    // 1. empty()
    std::cout << "Is str empty? " << (str.empty() ? "Yes" : "No") << std::endl;
    std::cout << "Is str1 empty? " << (str1.empty() ? "Yes" : "No") << std::endl;
    std::cout << "Is str2 empty? " << (str2.empty() ? "Yes" : "No") << std::endl;

    // 2. size() / length()
    std::cout << "Size of str: " << str.size() << std::endl;
    std::cout << "Length of str: " << str.length() << std::endl;
    std::cout << "Size of str2: " << str2.size() << std::endl;
    std::cout << "Length of str2: " << str2.length() << std::endl;

    // 3. at()
    try
    {
        std::cout << "Character at index 7: " << str.at(8) << std::endl;
    }
    catch (const std::out_of_range &e)
    {
        std::cout << "Out of range error: " << e.what() << std::endl;
    }

    // 4. clear()
    str.clear();
    std::cout << "String after clear(): " << (str.empty() ? "Empty" : str) << std::endl;
    // Resetting string
    str = "Hello, World!";

    // 5. erase()
    str.erase(5, 2); // Usunięcie 2 znaków od indeksu 5
    std::cout << "String after erase: " << str << std::endl;

    // 6. find()
    size_t found = str.find("World");
    if (found != String::npos)
        std::cout << "Substring \"World\" found at index: " << found << std::endl;
    else
        std::cout << "Substring not found" << std::endl;

    // 7. swap()
    str.swap(str1);
    std::cout << "String after swap (str): " << str << std::endl;
    std::cout << "String after swap (str1): " << str2 << std::endl;

    // 8. substr()
    String sub = str.substr(4, 6);
    std::cout << "Substring from index 4, length 6: " << sub << std::endl;

    // 9. append()
    str.append(" is awesome!");
    std::cout << "String after append: " << str << std::endl;
}