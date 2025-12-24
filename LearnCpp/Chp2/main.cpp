#include "Alex.h" // copies #define MY_NAME from Alex.h here
#include <iostream>
#include "add.h" 
int main()
{
	//std::cout << "My name is: " << MY_NAME << '\n'; // preprocessor replaces MY_NAME with "Alex"

	std::cout << "The sum of 3 and 4 is " << add(3, 4) << '\n';

	return 0;
}