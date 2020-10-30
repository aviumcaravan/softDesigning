#include <iostream>
#include <string>
#include <cstdlib>
#include "rectangle.hpp"

void rectangleCreator(unsigned int a, unsigned int b)
{
    //gather input for values

    std::cout << "please enter the width (unsigned integer): ";
    std::cin >> a;
    std::cout << "please enter the height (unsigned integer): ";
    std::cin >> b;

    //begin generating the rectangle

    for (unsigned int n = 0; n <= a; n++)
    {
        std::cout << "x";
    }
    
    for (unsigned int c = 0; c <= b - 2; c++)
    {
        std::cout << "x";
        for (unsigned int n = 0; n <= a - 1; n++)
        {
            std::cout << ' ';
        }
        std::cout << "x\n";
    }

    for (unsigned int n = 0; n <= a; n++)
    {
        std::cout << "x";
    }

    std::cout << '\n';
}