#include <iostream>

int main()
{
    int x{ 012 }; // 0 before the number means this is octal
    std::cout << x << '\n';
    

    int y{ 0xF }; // 0x before the number means this is hexadecimal
    std::cout << y << '\n';

    int z{ 12 };
    std::cout << z << '\n'; // decimal (by default)
    std::cout << std::hex << z << '\n'; // hexadecimal
    std::cout << z << '\n'; // now hexadecimal
    std::cout << std::oct << z << '\n'; // octal
    std::cout << std::dec << z << '\n'; // return to decimal
    std::cout << z << '\n'; // decimal

    z <<= 1;
    std::cout << z;
    
    
    
    return 0;

}