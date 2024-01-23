#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
	std::string str;
	std::cin >> str;
	std::vector<int> nums1;
	std::vector<int> nums2;
	for (int i = 0; i < str.length(); i++)
	{
		nums1.push_back(static_cast<int>(str[i]) - 48);
	}

	std::sort(nums1.begin(), nums1.end());

	for (int i = nums1.size()-1; i >= 0; i--)
	{
		std::cout << nums1[i];
	}
}
//12 22
