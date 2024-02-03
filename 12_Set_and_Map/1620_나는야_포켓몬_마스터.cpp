#include <iostream>
#include <string>
#include <vector>
#include <map>


std::string pokemon[100000];
int main()
{
	int n, m, idx;
	std::map<std::string, int> pokemons;

	std::cin.tie(0);
	std::ios::sync_with_stdio(0);
	std::cin >> n >> m;

	for (int i = 0; i < n; i++)
	{
		std::cin >> pokemon[i];
		pokemons.insert({ pokemon[i], i });
	}
	for (int i = 0; i < m; i++)
	{
		std::string temp;
		std::cin >> temp;
		if (std::isdigit(temp[0]))
		{
			idx = std::stoi(temp) - 1;
			std::cout << pokemon[idx] << '\n';

		}
		else
		{
			if (pokemons.find(temp) != pokemons.end())
				std::cout << pokemons[temp] + 1 << '\n';

		}
	
	}

}
