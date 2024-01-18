#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
	std::vector<int> nums;
	int n;
	std::cin >> n;

	for (int i = 0; i < n; i++)
	{
		int temp;
		std::cin >> temp;
		nums.push_back(temp);

		
	}
	std::sort(nums.begin(), nums.end());

	for (int i = 0; i < nums.size(); i++)
	{
		std::cout << nums[i] << '\n';
	}
	
}
