#include <iostream>
#include <vector>

int main()
{
	int n, m;
	std::vector<int> baskets; // 바구니들
	std::cin >> n >> m;
	for (int i = 0; i < n; i++)
	{
		baskets.push_back(0);
	}
	for (int l = 0; l < m; l++)
	{

		int i, j, k;
		std::cin >> i >> j >> k;
		if(i == j)
		{
			baskets[i - 1] = k;
		}
		else
		{
			for (int o = i; o <= j; o++)
			{
				baskets[o - 1] = k;
			}
		}
	}

	for (int i = 0; i < n; i++)
	{
		std::cout << baskets[i] << " ";
	}
	return 0;

}
