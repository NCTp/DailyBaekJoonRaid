#include <iostream>
#include <algorithm>
#include <vector>
#include <math.h>

bool isFactor(int num)
{
	for (int i = 2; i <= std::sqrt(num); i++)
	{
		if (num % i == 0) return false;
	}
	return true;
}
int main()
{
	// n이 짝수일 경우 -> 첫번쨰 * 마지막
	// n이 홀수일 경우 -> 소수인지 판별 -> 소수일 경우 제곱.
	int n;
	std::cin >> n;
	std::vector<int> nums;
	for (int i = 0; i < n; i++)
	{
		int temp;
		std::cin >> temp;
		nums.push_back(temp);
	}

	std::sort(nums.begin(), nums.end());


	if (n >= 2) std::cout << nums[0] * nums[n - 1];
	else
	{
		if (isFactor(nums[0])) std::cout << nums[0] * nums[0];
	}

}
