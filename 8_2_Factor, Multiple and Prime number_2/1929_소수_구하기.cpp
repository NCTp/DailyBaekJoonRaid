#include <iostream>
#include <vector>
#include <math.h>

// 소수인지를 판별하는 함수. 자신의 제곱근보다 작은 수로 나누어지지 않을 경우ㅡ,
// 그 수는 소수임.
template <typename T>
bool Check(T input)
{
	T sqrt_input = std::sqrt(input);
	for (int i = 2; i <= sqrt_input; i++)
	{
		if (input % i == 0)
			return false;
	}
	return true;
}

int main()
{
	int m, n;
	std::cin >> m >> n;
	if (m < 2)
		m = 2;
	for (int i = m; i <= n; i++)
	{
		if (i == 0 || i == 1)
		{
			std::cout << 2 << '\n';
		}
		else 
		{
			if (Check(i) == true)
			{
				std::cout << i << '\n';
			}
		}
	}
	return 0;
}
