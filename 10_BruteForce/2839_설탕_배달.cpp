#include <iostream>

int main() {
	int n;
	int count = 0;
	std::cin >> n;

	while (n >= 0)
	{
		if (n % 5 == 0)
		{
			std::cout << n / 5 + count;
			return 0;
		}

		n -= 3;
		count++;
	}

	std::cout << -1;
}
