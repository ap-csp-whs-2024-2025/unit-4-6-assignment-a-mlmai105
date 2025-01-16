/**
* listhelpers.hpp has been provided by the instructor as starter code
* contains the following procedures to work with lists:
* display, append, insert, remove, length
*/
#include "listhelpers.hpp"

#include <cstdlib>   // srand, rand
#include <ctime>     // time
#include <iostream>  // std::cin, std::cout
#include <string>    // std::string, std::getline
#include <vector>    // std::vector

 // prob 1
void compare(int a, int b)
{
    if(a > b)
    {
      
        std::cout << a << " is larger than " << b << std::endl;
    }

    if(a < b)
    {
        std::cout << a << " is smaller than " << b << std::endl;
    }

    if(a = b)
    {
        std::cout << a << " and " << b << " are equal " << std::endl;
    }

 
}

int main()
{
    // Complete your homework here
    // prob 1

    int num1;
    int num2;
    std::cout << "enter two numbers\n";
    std::cin >> num1 >> num2;
    compare(num1, num2);
    
    return 0;
}
