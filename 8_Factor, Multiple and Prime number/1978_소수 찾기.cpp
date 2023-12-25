#include <iostream>
#include <vector>
int main()
{
	int n;
	int sum = 0;
	std::cin >> n;

	for (int i = 0; i < n; i++)
	{
		int temp;
		std::cin >> temp;
		if (temp != 1)
		{
			for (int i = 2; i < temp - 1; i++)
			{
				if (temp % i == 0)
				{
					sum++;
					break;
				}
			}
		}
		else
		{
			sum++;
		}
	}

	std::cout << n - sum;

	return 0;
}
