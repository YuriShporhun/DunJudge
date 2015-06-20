#include <iostream>

int main()
{
	unsigned short int number;
	std::cin >> number;
	if(number > 80)
	{
		std::cout << "4.0";
	}
	else if(number <= 79 && number >= 70)
	{
		std::cout << "3.6";
	}
	else if(number <= 69 && number >= 65)
	{
		std::cout << "3.2";
	}
	else if(number <= 64 && number >= 60)
	{
		std::cout << "2.8";
	}
	else if(number <= 59 && number >= 55)
	{
		std::cout << "2.4";
	}
	else if(number <= 54 && number >= 50)
	{
		std::cout << "2.0";
	}
	else if(number <= 49 && number >= 45)
	{
		std::cout << "1.6";
	}
	else if(number <= 44 && number >= 40)
	{
		std::cout << "1.2";
	}
	else
	{
		std::cout << "0.8";
	}
	return 0;
}