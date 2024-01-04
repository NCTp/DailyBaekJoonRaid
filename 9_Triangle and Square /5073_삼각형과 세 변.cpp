#include <iostream>

int main()
{
	int a = 1, b = 1, c = 1;// 삼각형 세 변의 길이

	while (true)
	{
		std::cin >> a >> b >> c;
		if (a == 0 && b == 0 && c == 0)
		{
			return 0;
		}
		if (a >= b + c || b >= c + a || c >= a + b)
		{
			std::cout << "Invalid" << std::endl;
		}
		else if (a == b && b == c && c == a)
		{
			std::cout << "Equilateral" << std::endl;
		}
		else if (a == b || b == c || c == a)
		{
		    std::cout << "Isosceles" << std::endl;
		}
		else
		{
			std::cout << "Scalene" << std::endl;
		}

	}
	return 0;
}
