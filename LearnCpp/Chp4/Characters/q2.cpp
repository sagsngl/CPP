#include <iostream>

double add (double a, double b)
{
	return a + b;
}
double subtract (double a, double b)
{
	return a - b;
}	
double multiply (double a, double b)
{
	return a * b;
}
double divide (double a, double b)
{
	return a / b;
}
double get_double()
{
	std::cout << "Enter a double value: ";
	double dub{};
	std::cin >> dub;
	return dub;
}
char get_operation()
{
	std::cout << "Enter +, -, *, or /: ";
	char op{};
	std::cin >> op;
	return op;
}

int main8()
{
	double a{ get_double() };
	double b{ get_double() };
	char op{ get_operation() };
	
	if (op == '+')
		std::cout << a << " + " << b << " = " << add(a, b) << '\n';
	else if (op == '-')
		std::cout << a << " - " << b << " = " << subtract(a, b) << '\n';
	else if (op == '*')
		std::cout << a << " * " << b << " = " << multiply(a, b) << '\n';
	else if (op == '/')
		std::cout << a << " / " << b << " = " << divide(a, b) << '\n';
	
	return 0;

}