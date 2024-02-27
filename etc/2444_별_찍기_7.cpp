#include <iostream>

int main()
{
	int n;
	std::cin >> n;
	n = n * 2;
	for (int i = 1; i < n / 2; i++)
	{
		for (int j = 0; j < n / 2 - i; j++)
		{
			std::cout << " ";
		}
		for (int j = n / 2 - i; j < n / 2 + i - 1; j++)
		{
			std::cout << "*";
		}

		std::cout << '\n';
	}

	for (int i = 0; i < n - 1; i++)
	{
		std::cout << "*";
	}

	std::cout << '\n';
	for (int i = n/2 - 1; i >= 1; i--)
	{
		for (int j = 0; j < n / 2 - i; j++)
		{
			std::cout << " ";
		}
		for (int j = n / 2 - i; j < n / 2 + i - 1; j++)
		{
			std::cout << "*";
		}

		if(i != 1) std::cout << '\n';
	}
}
