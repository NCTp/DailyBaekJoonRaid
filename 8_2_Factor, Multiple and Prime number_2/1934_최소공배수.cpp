#include <iostream>


int main()
{
	int n, a, b, c = 0;
	std::cin >> n;

	for (int i = 0; i < n; i++)
	{
		std::cin >> a >> b;
		int temp_a = a;
		int temp_b = b;
		while (b != 0)
		{
			c = a % b; 
			a = b;
			b = c;
		}

		std::cout << (temp_a * temp_b) / a << '\n';
	}

	return 0;
}
