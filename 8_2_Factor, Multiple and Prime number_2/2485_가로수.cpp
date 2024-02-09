#include <iostream>
#include <vector>
template <typename T>
T gcd(T a, T b)
{
	T c;
	while (b != 0)
	{
		c = a % b;
		a = b;
		b = c;
	}

	return a;
}

int main()
{
	int n, temp, temp2 = 0;
	std::cin >> n;
	std::vector<int> distance;

	for (int i = 0; i < n; i++)
	{
		std::cin >> temp;
		if (temp2 != 0)
			distance.push_back(temp - temp2);
		temp2 = temp;
	}

	int _gcd = distance[0];
	for (int i = 1; i < distance.size(); i++)
	{
		_gcd = gcd(_gcd, distance[i] );
	}

	int count = 0;
	for (int i = 0; i < distance.size(); i++)
	{
		count += (distance[i] / _gcd) - 1;
	}

	std::cout << count;
}
