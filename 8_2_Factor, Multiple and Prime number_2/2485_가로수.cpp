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
	int n;
	int temp, temp2 = 0;

	std::vector<int> distance; // 모든 간격 저장.

	std::cin >> n;
	for (int i = 0; i < n; i++)
	{
		std::cin >> temp;
		if (temp2 != 0)
			distance.push_back(temp - temp2);
		
		temp2 = temp;
	}

	int _gcd = distance[0]; // 모든 간격들의 최소 공약수.
	for (int i = 1; i < distance.size(); i++)
	{
		_gcd = gcd(_gcd, distance[i]);

	}

	int count = 0; // 심을 가로수의 갯수.
	for (int i = 0; i < distance.size(); i++)
	{
		count += (distance[i] / _gcd) - 1;
	}

	std::cout << count;
}
