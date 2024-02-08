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

void Simplify(int a, int b, int c, int d)
{
	int e = a * d + c * b;
	int f = b * d;

	std::cout << e / gcd(e,f) << " " << f / gcd(e,f);
}

int main()
{
	int a, b;
	int c, d;

	std::cin >> a >> b;
	std::cin >> c >> d;

	Simplify(a, b, c, d);


}
