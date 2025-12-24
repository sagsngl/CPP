#include <string>
#include <iostream>

/*
int main()
{
	std::string name{};
	return 0;
}
*/

/*
int main()
{
	std::string name{ "Alex" };
	name = "John";

	return 0;
}
*/

int main()
{
	std::cout << "enter your name: ";
	std::string name{};
	std::getline(std::cin >> std::ws, name);

	std::cout << "Enter your favorite color: ";
	std::string color{};
	std::getline(std::cin >> std::ws, color); // read a full line of text into color

	std::cout << "Your name is " << name << " and your favorite color is " << color << '\n';

	return 0;

}