#include <iostream>

int main6()
{
	std::cout << "Enter a single character: ";
	char ch{};
	std::cin >> ch; // read a character from user input
	std::cout << "You entered '" << ch << "' which has ASCII code " << static_cast<int>(ch) << '\n';

	return 0;
}