#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <algorithm>
#include <iterator>

int main()
{
	using namespace std;
	string line;
	vector<string> tokens;
	getline(cin, line);
	istringstream iss(line);

	copy(istream_iterator<string>(iss),
		istream_iterator<string>(),
		back_inserter(tokens));

	int numberOne = atoi(tokens[0].c_str());
	string _operator = tokens[1];
	int numberTwo = atoi(tokens[2].c_str());

	int result;

	if(_operator == "+")
	{
		result = numberOne + numberTwo;			
	}
	else if(_operator == "-")
	{
		result = numberOne - numberTwo;
	}
	else if(_operator == "*")
	{
		result = numberOne * numberTwo;
	}
	cout << result << endl;
	return 0;
}