#include <iostream>
#include <algorithm>
#include <vector>
int main()
{
	std::vector<int> results;

	int n;

	std::cin >> n;

	for (int i = 2; i*i <= n; i++)
	{
		while (n % i == 0)
		{
			results.push_back(i);
			n /= i;
		}
	}

	if(n != 1)
		results.push_back(n);


	std::sort(results.begin(), results.end());
	for (auto& i : results)
		std::cout << i << " ";

	return 0;
}
