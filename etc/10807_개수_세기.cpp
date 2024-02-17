#include <iostream>
#include <vector>

int main()
{
	int n, sum = 0;
	std::vector<int> nums;
	std::cin >> n;
	for (int i = 0; i < n; i++)
	{
		int temp;
		std::cin >> temp;
		nums.push_back(temp);
	}
	std::cin >> n;
	for (int i = 0; i < nums.size(); i++)
	{
		if (nums[i] == n) sum++;
	}
	std::cout << sum;

}
