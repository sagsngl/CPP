#include <iostream>

int main1()
{
    int x{ 4 }; // x is a non-constant variable
    x = 5; // change value of x to 5 using assignment operator

    const double gravity{ 9.8 };  // preferred use of const before type
    int const sidesInSquare{ 4 }; // "east const" style, okay but not preferred

    return 0;
}