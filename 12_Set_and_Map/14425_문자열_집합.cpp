#include <iostream>
#include <string>
#include <map>

int main()
{
	int n, m, result = 0;
	std::map<std::string, int> map;
	std::cin >> n >> m;

	for (int i = 0; i < n; i++)
	{
		std::string temp;
		std::cin >> temp;
		map.insert({temp, i});
	}

	for (int i = 0; i < m; i++)
	{
		std::string temp2;
		std::cin >> temp2;
		if (map.find(temp2) != map.end()) 
		{
			result++;
		}
	}

	std::cout << result;
}
