#include <iostream>
#include <algorithm>
#include <vector>
#include <math.h>

static int nn[8001] = { 0 };

int main()
{
	int n, temp, avr, cen, mode = 0, diff;
	double sum = 0;
	
	std::vector<int> nums;

	std::cin >> n;
	while (n--)
	{
		std::cin >> temp;
		sum += temp;
		nums.push_back(temp);
		nn[temp + 4000] += 1;
	}

	std::sort(nums.begin(), nums.end());

	avr = std::round(sum / nums.size());
	cen = nums[nums.size() / 2];
	
	if (avr == -0) avr == 0;
	diff = nums[nums.size() - 1] - nums[0];

	for (int i = 0; i < 8001; i++)
	{
		if (nn[i] > nn[mode]) mode = i;
	}

	for (int i = mode + 1; i < 8001; i++)
	{
		if (nn[i] == nn[mode])
		{
			mode = i;
			break;
		}
	}

	std::cout << avr << '\n';
	std::cout << cen << '\n';
	std::cout << mode - 4000 << '\n';
	std::cout << diff << '\n';
	
	
	return 0;
}
