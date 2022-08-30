
#include <iostream>
#include "FLinked.h"

int main()
{
    int a = 5, * p;
    p = new int;
    *p = a;
    a = *p + 2;
    std::cout << a << " " << *p << std::endl;
    delete p;


    int array[5]{ 1,2,3,4,5 };

    int* ptr = array;

    std::cout << *ptr << std::endl;

    ptr++;

    std::cout << *ptr << std::endl;


    ptr++;

    std::cout << *ptr;



    FLinked<int> list;
    list.add(1);
    list.add(23);
    list.add(3);
    std::cout << list[1] << std::endl;
    return 0;
    

    //https://docs.microsoft.com/en-us/cpp/cpp/smart-pointers-modern-cpp?view=vs-2019


}

