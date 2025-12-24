/*
#include <iostream>

int main35()
{
	std::cout << "Enter as number: ";
	int i{};
	std::cin >> i;
	if (i == 2 || i == 3 || i == 5 || i == 7)
		std::cout << "The digit is prime";
	else 
		std::cout << "The digit is not prime";

	return 0;
}
*/
#include <iostream>

bool isAllowedToTakeFunRide()
{
	std::cout << "How tall are you? (cm)\n";

	double height{};
	std::cin >> height;

	/*
	if (height >= 140.0)
		return true;
	else
		return false;
		*/
	return (height >= 140.0);
}

int main()
{
	if (isAllowedToTakeFunRide())
		std::cout << "Have fun!\n";
	else
		std::cout << "Sorry, you're too short.\n";

	return 0;
}