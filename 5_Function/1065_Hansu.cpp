#include <iostream>

int d(int n)
{
	int counts = 0;
	if (n < 100)
		return n;
	else
	{
		counts = 99;
		for (int i = 100; i <= n; i++)
		{
			int j = i % 10;
			int k = (i / 10) % 10;
			int l = (i / 100);

			if (j - k == k - l)
			{
				counts++;
			}
		}
	}
	return counts;
}

int main()
{
	int temp;
	std::cin >> temp;
	std::cout << d(temp);

}