#include <iostream>
#include <map>
#include <string>

int main()
{
	int n,m, sum = 0;
	std::map<std::string, int> deut;
	std::map<std::string, int> bo;

	std::cin >> n >> m;

	for (int i = 0; i < n + m; i++)
	{
		std::string temp;
		std::cin >> temp;
		if (i < n)
		{
			deut.insert({temp, 0});
		}
		else
		{
			if (deut.find(temp) != deut.end())
			{
				deut[temp] = 1;
				sum++;
			}
		}
	}

	std::cout << sum << '\n';
	for (std::map<std::string, int>::iterator it = deut.begin(); it != deut.end(); ++it)
	{
		if(it->second == 1)
			std::cout << it->first << '\n';
	}
}
