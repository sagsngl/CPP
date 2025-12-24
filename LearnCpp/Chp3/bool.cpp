/*
bool b1 {true };  // true is a boolean literal
bool b2 {false};  // false is a boolean literal
b1 = false;
bool b3 {};      // default initialized to false

bool b4 {!true}; // logical NOT operator applied to true yields false

*/

#include <iostream>

int main46()
{
    std::cout << true << '\n';
    std::cout << false << '\n';

    std::cout << std::boolalpha; // print bools as true or false

    std::cout << true << '\n';
    std::cout << false << '\n';

	std::cout << std::noboolalpha; // print bools as 1 or 0
    return 0;
}

int main()
{
	bool b{};
	std::cout << "Enter a boolean value: ";

	// Allow the user to input 'true' or 'false' for boolean values
	// This is case-sensitive, so True or TRUE will not work
	std::cin >> std::boolalpha;
	std::cin >> b;

	// Let's also output bool values as `true` or `false`
	std::cout << std::boolalpha;
	std::cout << "You entered: " << b << '\n';

	return 0;

	return 0;
}