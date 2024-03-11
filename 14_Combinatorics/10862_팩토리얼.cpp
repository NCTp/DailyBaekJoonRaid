#include <iostream>

int main()
{
	int n;
	int result = 1;
	std::cin >> n;

	for (int i = 1; i <= n; i++)
	{
		result *= i;
	}

	std::cout << result;
	return 0;
}
