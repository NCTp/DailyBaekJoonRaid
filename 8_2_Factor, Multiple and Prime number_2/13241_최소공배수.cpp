#include <iostream>

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
template <typename T>
T lcm(T a, T b)
{
	return a * b / gcd(a, b);
}

int main()
{
	long long int a, b;
	std::cin >> a >> b;

	std::cout << lcm<long long int>(a, b);
}
