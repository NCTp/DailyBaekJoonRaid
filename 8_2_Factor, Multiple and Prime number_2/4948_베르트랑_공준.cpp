#include <iostream>
#include <vector>
#include <math.h>

int nums[1000000];

int Check2(int n, int nn)
{
	int count = 0;
	for (int i = n; i <= nn; i++)
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
	for (int i = n + 1; i <= nn; i++)
	{
		if (nums[i] != 0)
			count++;
	}

	return count;
}

int main()
{
	int n;
	std::cin >> n;
	while (n != 0)
	{
		std::cout << Check2(n, n * 2) << '\n';
		std::cin >> n;
	}
	return 0;

}
