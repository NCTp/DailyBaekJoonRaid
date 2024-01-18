#include <iostream>
#include <vector>
#include <algorithm>

// 버블정렬. 인전한 두 원소끼리 비교하면서 정렬하는 기법
// 장점: 구현의 간단함
// 단점: 비교할 필요가 더이상 없는 원소도 비교 대상에 포함되고,
//      가장 왼쪽의 원소가 가장 오른쪽으로 이동해야 할 때, 모든 원소들과 값을 비교해야 하기 때문에
//      자료형의 크기가 커질수록 더 많은 리소스를 필요로 하게 된다.
void BubbleSort(std::vector<int> &nums)
{
	for (int i = nums.size() - 1; i > 0; i--)
	{
		for (int j = 0; j < i; j++)
		{
			if (nums[j] > nums[j + 1])
			{
				int temp = nums[j + 1];
				nums[j + 1] = nums[j];
				nums[j] = temp;
			}
		}
	}
}
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
	//std::sort(nums.begin(), nums.end());
	//BubbleSort(nums);

	for (int i = 0; i < nums.size(); i++)
	{
		std::cout << nums[i] << '\n';
	}
	
}

