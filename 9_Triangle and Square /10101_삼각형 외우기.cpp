#include <iostream>

int main()
{
	int a, b, c;// 삼각형 세 변의 길이
	std::cin >> a >> b >> c;
	if (a + b + c != 180)
	{
		std::cout << "Error";
	}
	else
	{
		if (a == 60 && b == 60 && c == 60)
		{
			std::cout << "Equilateral";
		}
		else if (a == b || b == c || c == a)
		{
			std::cout << "Isosceles";
		}
		else if (a != b && b != c && c != a)
		{
			std::cout << "Scalene";
		}
	}
	return 0;
}
