#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
	int n, k;
	std::vector<int> scores;
	std::cin >> n >> k;

	for (int i = 0; i < n; i++)
	{
		int temp;
		std::cin >> temp;
		scores.push_back(temp);
	}
	std::sort(scores.begin(), scores.end());

	int cutlineIdx = scores.size() - k;
	std::cout << scores[cutlineIdx];
}

