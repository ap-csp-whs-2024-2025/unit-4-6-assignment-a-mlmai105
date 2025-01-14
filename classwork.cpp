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

// In-Class Examples
// greet procedure

// goodbye procedure


// TODO: Create squareNum
// void squareNum(int n)
// {
//     std::cout << "the sqaure of " << n << " is " << (n*n) << std::endl;
// }

// TODO: Create distance
// void distance(double x, double y)
// {
//     double dist = abs(x-y);
//     std::cout << "the distance between " << x << " and " << y << " is " << dist << std::endl;
// }

// TODO: Create rollDice
void rollDice()
{

    int randomNumber = rand() % 6 + 1;


    // Print the result 
    std::cout << "You rolled a " << randomNumber << std::endl;

}


int main()
{
    // You can follow along with any code in class here
    // squareNum(5);
    // squareNum(-3);
    // squareNum(0);

    // double num1;
    // double num2;
    // std::cout << "enter two numbers:\n";
    // std::cin >> num1 >> num2;
    // distance(num1, num2);

// seed the random number generator with the current time 
    srand(time(0));

    rollDice();
    rollDice();
    rollDice();


    
    

    return 0;
}
