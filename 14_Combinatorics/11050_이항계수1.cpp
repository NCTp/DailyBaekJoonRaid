#include <iostream>

int main()
{
	int n, k;
	int result = 1;
	std::cin >> n >> k;

	for (int i = n; i > n - k; i--)
	{
		result *= i;
	}
	for (int i = k; i >= 1; i--) 
	{
		result /= i;
	}

	std::cout << result;
	return 0;
}
