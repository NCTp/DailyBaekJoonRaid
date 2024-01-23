#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
	std::string str;
	std::cin >> str;
	std::vector<int> nums1;

	for (int i = 0; i < str.length(); i++)
	{
		nums1.push_back(static_cast<int>(str[i]) - 48);
	}

	std::sort(nums1.begin(), nums1.end(), [](int a, int b) {
		return a > b;
		
		});

	for (int i = 0; i < nums1.size(); i++)
	{
		std::cout << nums1[i];
	}
}
//12 22
