#include <iostream>
int main()
{
	int a, b;
	std::cin >> a >> b;
	int n = 1;
	int sum = 0;
	while (b != 0)
	{
		int result = a * (b % 10);
		std::cout << result << '\n';
		sum += result * n;
		n *= 10;
		b /= 10;
	}
	std::cout << sum;

}
