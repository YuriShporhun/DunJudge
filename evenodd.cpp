#include <iostream>

int main()
{
	int number = 0;
	std::cin >> number;
	if(number % 2 == 0)
	{
		std::cout << "Even" << std::endl;
	}
	else
	{
		std::cout << "Odd" << std::endl;
	}
	return 0;
}