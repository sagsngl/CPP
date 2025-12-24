/*
int a { 5 };      // 5 means integer
double b { 5.0 }; // 5.0 is a floating point literal (no suffix means double type by default)
8 bytes

float c { 5.0f }; // 5.0 is a floating point literal, f suffix means float type
4 bytes

int d { 0 };      // 0 is an integer
double e { 0.0 }; // 0.0 is a double
*/

#include <iostream>

int main44()
{
	std::cout << 5.0 << '\n';
	std::cout << 6.7f << '\n';
	std::cout << 9876543.21 << '\n' << '\n';

    std::cout << 9.87654321f << '\n';
    std::cout << 987.654321f << '\n';
    std::cout << 987654.321f << '\n';
    std::cout << 9876543.21f << '\n';
    std::cout << 0.0000987654321f << '\n';

    return 0;
}