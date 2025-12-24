#include <iostream>

#define PRINT_JOE

int main44()
{
#ifdef PRINT_JOE
    std::cout << "Joe\n"; // will be compiled since PRINT_JOE is defined
#endif

#ifdef PRINT_BOB
    std::cout << "Bob\n"; // will be excluded since PRINT_BOB is not defined
#endif

#ifndef PRINT_BOB
    std::cout << "Sally\n"; // will be compiled since PRINT_BOB is not defined
#endif

// Demonstrate #if with a constant expression
#if 0 // Don't compile anything starting here
    std::cout << "Bob\n";
    std::cout << "Steve\n";
#endif // until this point

    return 0;
}   