#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
	std::vector<int> nums;
	int sum = 0;
	for (int i = 0; i < 5; i++)
	{
		int temp;
		std::cin >> temp;
		nums.push_back(temp);
		sum += temp;
	}

	std::sort(nums.begin(), nums.end());



	std::cout << sum/5 << '\n' << nums[2];
	
}

