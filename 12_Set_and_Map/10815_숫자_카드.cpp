#include <iostream>
#include <algorithm>
#include <map>

int main()
{
	int n, m;
	std::map<int, int> map1;
	std::map<int, int> map2;

	std::cin >> n;

	for (int i = 0; i < n; i++)
	{
		int temp;
		std::cin >> temp;
		map1.insert({ temp, temp });
	}

	std::cin >> m;

	for (int i = 0; i < m; i++)
	{
		int temp;
		std::cin >> temp;
		if (map1.find(temp) == map1.end())
			map2.insert({ i, 0});
		else
			map2.insert({ i, 1});
	}

	for (int i = 0; i < map2.size(); i++)
	{
		std::cout << map2[i] << " ";
	}
	
}
