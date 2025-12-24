#include<iostream>

// Definition of user-defined function doPrint()
// doPrint() is the called function in this example
void doPrint()
{
    std::cout << "In doPrint()\n";
}

//Definition of user-defined function main()
int main1()
{
	std::cout << "Starting main()\n";
	doPrint(); // Function call
	// Control is transferred to the called function doPrint()
	std::cout << "Ending main()\n";

	return 0;
}