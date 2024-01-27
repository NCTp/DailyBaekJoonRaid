#include <iostream>
#include <vector>
#include <algorithm>
#include <string>


int main()
{
	int n;
	std::vector<std::string> strings;
	std::cin >> n;

	for (int i = 0; i < n; i++)
	{
		std::string temp;
		std::cin >> temp;
		auto it = std::find(strings.begin(), strings.end(), temp);
		if (it == strings.end())
			strings.push_back(temp);
	}

	std::sort(strings.begin(), strings.end(), [](std::string a, std::string b) {
		if (a.length() == b.length())
		{
			return a < b;
		}
		else
		{
			return a.length() < b.length();
		}

		});

	for (int i = 0; i < strings.size(); i++)
	{
		std::cout << strings[i]  << '\n';
	}
	return 0;
}
