#include <iostream>
#include <algorithm>
#include <vector>
int main()
{
	std::ios::sync_with_stdio(0);
	std::cin.tie(0);
	std::vector<int> line;

	int order = 1;
	int n, m;
	std::cin >> n;
	int temp = n;
	while (n--)
	{
		std::cin >> m;

		if (m == order) order++;
		else
		{
			line.push_back(m);
		}
		while (line.size() > 0 && line.back() == order)
		{
			line.pop_back();
			order++;
		}
	}


	if (line.size() == 0) std::cout << "Nice";
	else std::cout << "Sad";
}
