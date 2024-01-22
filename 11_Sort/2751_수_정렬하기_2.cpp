#include <iostream>
#include <vector>
#include <algorithm>


// 그냥 STL쓰자,,,

// 버블정렬. 인전한 두 원소끼리 비교하면서 정렬하는 기법
// 장점: 구현의 간단함
// 단점: 비교할 필요가 더이상 없는 원소도 비교 대상에 포함되고,
//      가장 왼쪽의 원소가 가장 오른쪽으로 이동해야 할 때, 모든 원소들과 값을 비교해야 하기 때문에
//      자료형의 크기가 커질수록 더 많은 리소스를 필요로 하게 된다.
// O(n^2)
void BubbleSort(std::vector<int>& nums)
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

// 빠른 정렬.
// 장점: 빠름, 추가 메모리 공간을 필요로 하지 않음.
// 단점: 정렬된 리스트에 QuickSort를 이용할 경우 수행시간이 더 오래 걸린다.
// O(nlogn)
int Partition(std::vector<int> &list, int left, int right)
{
	int pivot, temp;
	int low, high;

	low = left;
	high = right + 1;
	pivot = list[left];

	do
	{
		do
		{
			low++;
		} while (low <= right && list[low] < pivot);
		do
		{
			high--;
		} while (high >= left && list[high] > pivot);

		if (low < high)
		{
			int temp = list[low];
			list[low] = list[high];
			list[high] = temp;
		}

	} while (low < high);

	int _temp = list[left];
	list[left] = list[high];
	list[high] = _temp;

	return high;
}
void QuickSort(std::vector<int> &list, int left, int right)
{
	if (left < right)
	{
		int q = Partition(list, left, right);

		QuickSort(list, left, q - 1);
		QuickSort(list, q + 1, right);
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

	std::sort(nums.begin(), nums.end());

	for (int i = 0; i < nums.size(); i++)
	{
		std::cout << nums[i] << '\n';
	}

}
