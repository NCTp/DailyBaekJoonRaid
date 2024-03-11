#include <iostream>

int main()
{
	int counts, n, m;
	std::cin >> counts;

	while(counts--)
	{
		long long result = 1;
		int temp = 1;
		std::cin >> n >> m;

		for (int i = m; i > m - n; --i)
		{
			result *= i;
			result /= temp++;
		}

		std::cout << result << '\n';
	}
	return 0;
}
