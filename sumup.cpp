#include <iostream>
#include <string>
#include <sstream>
#include <algorithm>
#include <iterator>

int main(int argc, char** argv) {
	using namespace std;
	int number;
	int sum = 0;
	while(cin >> number)
	{
		sum += number;			
	}
	cout << sum;
	return 0;
}
