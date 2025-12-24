#include <iostream>

#define ENABLE_DEBUG // enable disable debugging
int getValue()
{
#ifdef ENABLE_DEBUG
std::cerr << "getValue() called\n";
#endif // !ENABLE_DEBUG
     
    return 4;
}

int main1()
{
 //std::cerr << "main() called\n";
    std::cout << getValue() << '\n';

    return 0;
}