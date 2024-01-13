#include <iostream>
#include <numeric>
#include <vector>

int Constructor(int n);

int main()
{
	int N;
	std::vector<int> temp;
	std::cin >> N;
	
	int min = N + 1; // 생성자 중 가장 작은수

	for (int i = 0; i < N; i++)
	{
		if (Constructor(i) == N && i < min)
			min = i;
	}

	//서로소가 없는 경우
	if (min == N + 1)
		min = 0;

	std::cout << min;

	return 0;

}

// 생성자를 구하는 함수
int Constructor(int n)
{
	int temp = n;
	int sum = 0;
	std::vector<int> _temp;
	while (temp > 0)
	{
		_temp.push_back(temp % 10);
		temp /= 10;
	}
	sum = std::accumulate(_temp.begin(), _temp.end(), 0) + n;

	return sum;
}
