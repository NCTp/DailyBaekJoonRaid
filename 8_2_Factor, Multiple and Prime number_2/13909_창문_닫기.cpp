#include <iostream>
#include <math.h>

int main()
{
	int n;
	std::cin >> n;
	int n_sqrt = static_cast<int>(std::sqrt(n));
	//GetP(n);

	if (n == 1)
	{
		std::cout << static_cast<int>(std::sqrt(n));
	}
	else
	{
		if (n_sqrt == std::sqrt(n))
		{
			std::cout << static_cast<int>(std::sqrt(n) - 1);
		}
		else
		{
			std::cout << static_cast<int>(std::sqrt(n));
		}
	}
}
