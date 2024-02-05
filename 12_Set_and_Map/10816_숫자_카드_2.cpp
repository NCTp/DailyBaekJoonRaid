#include <iostream>
#include <map>

int cards_of_sang[500000];
int main()
{
	int n, m;
	std::map<int, int> cards;

	std::cin.tie(0);
	std::ios::sync_with_stdio(0);

	std::cin >> n;
	for (int i = 0; i < n; i++)
	{
		int temp;
		std::cin >> temp;
		if (cards.find(temp) == cards.end())
			cards.insert({ temp, 1 });
		else
			cards[temp]++;
	}

	std::cin >> m;
	for (int i = 0; i < m; i++)
	{
		int temp;
		std::cin >> temp;
		std::cout << cards[temp] << " ";
	}


}
