#include <iostream>
#include <vector>
int main()
{
	int N = 0;
	std::vector<int> results;

	while (N != -1)
	{
		int sum = 0;
		std::cin >> N;
		if (N == -1)
			return 0;
		for (int i = 1; i < N; i++)
		{
			if (N % i == 0)
			{
				results.push_back(i);
			}
			
		}

		for (int i = 0; i < results.size(); i++)
		{
			sum += results[i];
		}

		if (sum == N)
		{
			std::cout << N << " = " << results[0];
			for (int i = 1; i < results.size(); i++)
			{
				std::cout << " + " << results[i];
			}
			std::cout << std::endl;
		}
		else
		{
			std::cout << N << " is NOT perfect." << std::endl;
		}
		results.clear();
	}
	return 0;
}
