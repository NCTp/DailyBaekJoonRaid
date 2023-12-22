#include <iostream>
#include <vector>
int main()
{
	int N; 
	int K;
	int count = 0;

	std::cin >> N >> K;

	for (int i = 1; i <= N; i++)
	{
		if (N % i == 0)
			count++;

		if (count == K)
		{
			std::cout << i;
			return 0;
		}

	}

	if (count != K)
		std::cout << 0;

	return 0;
}
