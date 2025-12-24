#include<iostream>

int main5()
{
    std::cout << "This is a really, really, really, really, really, really, really, "
        "really long line\n"; // one extra indentation for continuation line

    std::cout << "This is another really, really, really, really, really, really, really, "
        "really long line\n"; // text aligned with the previous line for continuation line

    std::cout << "This one is short\n";

    std::cout << 3 + 4
        + 5 + 6
        * 7 * 8;
	// operators at the beginning of continuation lines
	return 0;
}