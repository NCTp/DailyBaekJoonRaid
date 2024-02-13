#include <iostream>
#include <math.h>

int nums[1000000];

void GetPrimeNumber(int nn)
{
	int count = 0;
	for (int i = 2; i <= nn; i++)
	{
		nums[i] = i;
	}
	for (int i = 2; i <= std::sqrt(nn); i++)
	{
		for (int j = i * i; j <= nn; j += i)
		{
			if (nums[j] != 0)
			{
				nums[j] = 0;
			}
		}
		
	}
}

int main()
{
	int n;
	int max = 0;
	std::cin >> n;
	GetPrimeNumber(1000000);
	for (int i = 0; i < n; i++)
	{
		int temp;
		int count = 0;
		std::cin >> temp;
		for (int i = 2; i <= temp / 2; i++)
		{
			if (nums[i] != 0)
			{
				if (nums[temp - nums[i]] != 0)
					count++;
			}
		}
		std::cout << count << '\n';

	}
	return 0;

}
