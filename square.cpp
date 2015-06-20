#include <iostream>

int main()
{
	int number = 0;
	std::cin >> number;
	for(int i = 0; i < number; i++)
	{
		for(int j = 0; j < number; j++)
		{
			std::cout << '*';
		}
		std::cout << std::endl;
	}
	return 0;
}