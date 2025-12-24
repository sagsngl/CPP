#include <iostream>

int getValueFromUser()
{
	std::cout << "Enter an integer: ";
	int input{};
	std::cin >> input;

	return input;
}

void printDouble(int value); // This function now has an integer parameter
/* {
	std::cout << value << " doubled is: " << value * 2 << '\n';
}*/

int doubleNumber(int x)
{
	return x * 2;
}

int main4()
{
	int num{ getValueFromUser() };

	printDouble(num);

	return 0;
}