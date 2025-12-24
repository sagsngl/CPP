#include <iostream>

void printValue(int value)
{
    std::cout << value << '\n';
}

int main2()
{
    printValue(5);

    return 0;
}

int main22()
{
	int x{ 1 };
	std::cout << x << ' ';

	x = x + 2;
	std::cout << x << ' ';

	x = x + 3;
	std::cout << x << ' ';

	return 0;
}

/*
F11 is step into
F10 is step over --> runs function without stepping into
Shift-F11 step out --> executes remaining function and breaks at caller
Ctrl-F10 or right click at line for "run to cursor"
F5 is continue --> runs until next breakpoint
F9 toggle breakpoint
*/