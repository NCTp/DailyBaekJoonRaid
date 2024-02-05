#include <iostream>
#include <map>
#include <string>

int main()
{
	std::string input_str;
	std::map<std::string, int> result;

	std::cin >> input_str;

	for (int i = 0; i < input_str.size(); i++)
	{
		for (int j = 1; j < input_str.size() + 1; j++)
		{
			result.insert({input_str.substr(i,j), 0});
		}
	}
	std::cout << result.size() << '\n';
}
