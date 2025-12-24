#include <iostream>

int getValueFromUsers() // this function now returns an integer value
{
	std::cout << "Enter an integer: ";
	int input{};
	std::cin >> input;

	return input; // return the value the user entered back to the caller
}

int main3()
{
	int num{ getValueFromUsers() }; // initialize num with the return value of getValueFromUser()

	std::cout << num << " doubled is: " << num * 2 << '\n';

	return 0;
}