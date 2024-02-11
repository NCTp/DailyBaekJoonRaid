#include <iostream>
#include <vector>
#include <math.h>

// 소수인지를 판별하는 함수. 자신의 제곱근보다 작은 수로 나누어지지 않을 경우ㅡ,
// 그 수는 소수임.
// O(N**0.5)
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

//에라토스테네스의 체.
//2의 배수, 3의 배수, 5의 배수.... n의 배수를 배열에서 제거해나가고,
//결국 배열에는 1과 자신으로만 나누어지는 소수만이 남는다.
//이 때, n은 가장 큰 수의 제곱근을 넘지 않아도 괜찮다.
// O(N*loglogN)
void eras(int a, int b)
{
	for (int i = a; i <= b; i++)
	{
		inputs[i] = i; // 해당 inputs 배열은 코드에서 없애두었음.
	}
	for (int i = 2; i <= std::sqrt(b); i++)
	{
		for (int j = i * i; j <= b; j += i)
		{
			if (inputs[j] != 0) inputs[j] = 0;
		}
	}
	for (int i = a; i <= b; i++)
	{
		if (inputs[i] != 0 && inputs[i] != 1) std::cout << inputs[i] << '\n';
	}

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
