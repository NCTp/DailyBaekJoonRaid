#include <iostream>

int main()
{
	int num;
	int sum = 0;
	std::cin >> num;
	char* nums = new char[num];
	std::cin.ignore();
	std::cin.getline(nums, num + 1);
	//std::cout << num << "-----------" << '\n';
	for (int i = 0; i < num; i++)
	{
		//std::cout << static_cast<int>(nums[i]) - 48 << "\n";
		sum += nums[i] - 48;
	}
	std::cout << sum;

}
