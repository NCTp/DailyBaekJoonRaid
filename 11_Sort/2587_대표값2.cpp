#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
	std::vector<int> nums;
	int n;
	int sum = 0;
	n = 5;

	for (int i = 0; i < n; i++)
	{
		int temp;
		std::cin >> temp;
		nums.push_back(temp);
		sum += temp;
	}

	int center = n / 2;

	std::sort(nums.begin(), nums.end());
	std::cout << sum/nums.size() << '\n' << nums[center];	
}


