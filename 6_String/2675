#include <iostream>
#include <string>
int main()
{
	int num_of_cases;
	std::cin >> num_of_cases;
	std::string *strs = new std::string[num_of_cases];
	for (int i = 0; i < num_of_cases; i++)
	{
		std::string result;
		std::string input;
		int repeat;
		std::cin >> repeat >> input;
		for (int j = 0; j < input.length(); j++)
		{
			for (int k = 0; k < repeat; k++)
			{
				result.push_back(input[j]);
			}
		}
		strs[i] = result;
	}
	for (int i = 0; i < num_of_cases; i++)
	{
		std::cout << strs[i] << "\n";
	}
	
}
