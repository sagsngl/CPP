#include <iostream>

double get_height(int time, double initial_height)
{
	const double gravity{9.8};
	return initial_height - 0.5 * gravity * time * time;
}
void print_heights(double initial_height)
{

	for (int time{ 0 }; time <= 10; ++time)
	{
		double height{ get_height(time, initial_height) };
		if (height > 0)
			std::cout << "At " << time << " seconds, the ball is at height: " << height << " meters\n";
		else
		{
			std::cout << "At " << time << " seconds, the ball is on the ground.\n";
			break;
		}
	}
}

int main()
{
	std::cout << "Enter the height of the tower in meters: ";
	double initial_height{};
	std::cin >> initial_height;
	print_heights(initial_height);
	return 0;
}