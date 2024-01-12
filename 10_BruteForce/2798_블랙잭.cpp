#include <iostream>
#include <cmath>
#include <vector>

int main()
{
	// 지문을 잘 읽자.
	int N, M, diff, sum = 0;
	std::vector<int> nums;
	std::cin >> N >> M;
	diff = M + 1;
	for (int i = 0; i < N; i++)
	{
		int temp;
		std::cin >> temp;
		nums.push_back(temp);
	}
	for (int i = 0; i < N-2; i++)
	{
		for (int j = i+1; j < N-1; j++)
		{
			for (int k = j+1; k < N; k++)
			{
				if (diff > std::abs(M - (nums[i] + nums[j] + nums[k])) && (nums[i] + nums[j] + nums[k]) <= M)
				{
					diff = std::abs(M - (nums[i] + nums[j] + nums[k]));
					sum = nums[i] + nums[j] + nums[k];
				}

			}
		}
	}
	std::cout << sum;
	return 0;

}
