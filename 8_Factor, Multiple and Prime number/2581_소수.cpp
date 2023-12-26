#include <iostream>

bool GuessPrimeNumber(int N);

int main()
{
	int M,N, sum = 0, count = 1;
	std::cin >> M >> N;

	for (int i = M; i <= N; i++)
	{
		if (GuessPrimeNumber(i))
		{
			if (count == 1)
				count = i;
			sum += i;
		}
	}


	if (sum == 0)
		std::cout << -1 << std::endl;
	else
		std::cout << sum << '\n' << count;

	return 0;
}

bool GuessPrimeNumber(int N)
{
	if (N == 1)
		return false;

	for (int i = 2; i <= N/2; i++)
	{
		if (N % i == 0)
			return false;
	}

	return true;
}
