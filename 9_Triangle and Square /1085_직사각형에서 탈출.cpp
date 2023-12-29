#include <iostream>

int main()
{
	int x, y, n, m;
	std::cin >> x >> y >> n >> m;

	if (x < y)
	{
		int temp = x < n - x ? x : n - x;
		if (temp > m - y)
			temp = m - y;
		std::cout << temp;
	}
	else
	{
		int temp = y < m - y ? y : m - y;
		if (temp > n - x)
			temp = n - x;
		std::cout << temp;
	}
}
