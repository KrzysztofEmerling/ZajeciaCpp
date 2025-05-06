#include <iostream>

int main()
{

  int my_array[] = {1,23,17,4,-5,100};
  
  int i;
  int * ptr;
  ptr = &my_array[0]; //ustaw wskaznik na pierwszy element tablicy 
  //ptr = my_array;   // nazwa tablicy to adres jej pierwszego elementu
  

  
    std::cout << "ptr++ inkrementuje wskaźnik ale zwraca jego wartość przed inkrementacją\n";
    std::cout << "ptr = "<< ptr << "\n";
    std::cout << "ptr++ = " << ptr++ << "\n";
    std::cout << "ptr = " << ptr << "\n\n";

    std::cout << "++ptr inkrementuje wskaźnik i zwraca jego wartość po inkrementacji\n";
    std::cout << "ptr = "<< ptr << "\n";
    std::cout << "++ptr = " << ++ptr << "\n";
    std::cout << "ptr = " << ptr << "\n\n";

    std::cout << "++*ptr wyłuskuje ją a następnie natychmiastowo inkrementuje\n";
    std::cout << "*ptr = "<< *ptr << "\n";
    std::cout << "++*ptr = " << ++*ptr << "\n";
    std::cout << "*ptr = " << *ptr << "\n\n";

    std::cout << "++(*ptr) wyłuskuje ją a następnie natychmiastowo inkrementuje (jak poprzednio)\n";
    std::cout << "*ptr = "<< *ptr << "\n";
    std::cout << "++(*ptr) = " << ++(*ptr) << "\n";
    std::cout << "*ptr = " << *ptr << "\n\n";


    std::cout << "++*(ptr) wyłuskuje ją a następnie natychmiastowo inkrementuje (jak poprzednio)\n";
    std::cout << "*ptr = "<< *ptr << "\n";
    std::cout << "++*(ptr) = " << ++*(ptr) << "\n";
    std::cout << "*ptr = " << *ptr << "\n\n";

    std::cout << "*ptr++ inkrementuje wskaźnik i wyłłuskuje jego poprzednią wartość\n";
    std::cout << "*ptr = "<< *ptr << "\n";
    std::cout << "*ptr++ = " << *ptr++ << "\n";
    std::cout << "*ptr = " << *ptr << "\n\n";

    std::cout << "(*ptr)++ wyłuskuje wskaźnik i inkrementuje jego zawartość, zwraca wartość przed inkrementacją\n";
    std::cout << "*ptr = "<< *ptr << "\n";
    std::cout << "(*ptr)++ = " << (*ptr)++ << "\n";
    std::cout << "*ptr = " << *ptr << "\n\n";

    std::cout << "*(ptr)++ wyłuskuje wskaźnik i inkrementuje jego zawartość, zwraca wartość przed inkrementacją\n";
    std::cout << "*ptr = "<< *ptr << "\n";
    std::cout << "*(ptr)++ = " << *(ptr)++ << "\n";
    std::cout << "*ptr = " << *ptr << "\n\n";
    return 0;
}