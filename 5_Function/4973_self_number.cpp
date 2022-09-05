#include <iostream>

int d(int n)
{
	int sum = n;
	while (n != 0)
	{
		sum += n % 10;
		n = n / 10;
	}
	return sum;
}

int main()
{
	bool check[10000] = { false, };
	for (int i = 1; i < 10000; i++)
	{
		int temp = d(i);
		if (temp < 10000)
			check[temp] = true;

		if (check[i] == false)
			std::cout << i << "\n";
	}


}