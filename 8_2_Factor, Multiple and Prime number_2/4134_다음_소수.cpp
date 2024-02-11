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
	int n;
	long long int result = 0;
	std::cin >> n;

	while (n > 0)
	{
		long long int input;
		std::cin >> input;
		if (input == 0 || input == 1)
		{
			result = 2;
		}
		else
		{
			while (!Check(input))
			{
				input++;
			}
			result = input;
		}
		std::cout << result << '\n';
		n--;
	}

	return 0;

}
