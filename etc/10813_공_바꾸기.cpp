#include <iostream>
#include <algorithm>
#include <vector>


int main()
{
	int n, m;// n = 공의 갯수, m = 바꾸는 횟수
	int i, j;
	std::cin >> n >> m;

	std::vector<int> nums;
	for (int i = 0; i < n; i++)
	{
		nums.push_back(i + 1);
	}
	while (m--)
	{
		std::cin >> i >> j;
		std::swap(nums[i-1], nums[j-1]);
	}
	for (int i = 0; i < n; i++)
	{
		std::cout << nums[i] << " ";
	}
}
