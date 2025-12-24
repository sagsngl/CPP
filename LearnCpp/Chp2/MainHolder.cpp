#include <iostream>

int add(int x, int y); // needed so main.cpp knows that add() is a function defined elsewhere
int getinteger(); // needed so main.cpp knows that getinteger() is a function defined elsewhere

int main45()
{
	
	int x{ getinteger() }; 
	int y{ getinteger() };
	std::cout << "The sum of the 2 numbers is: " << add(x, y) << '\n'; // compile error
    return 0;
}