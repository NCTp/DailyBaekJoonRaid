#include <iostream>
#include <vector>

int main(void)
{
	// 시간 복작도를 낮춰야 시간 초과에 걸리지 않는다.
	// std::endl 보다 '\n'이 더 싸다.
	std::ios_base::sync_with_stdio(false);
	std::cout.tie(NULL);
	std::cin.tie(NULL);
	int n, m, i, j;
	std::cin >> n >> m;
	std::vector<int> nums;
	nums.push_back(0); // 누적합을 위해 첫 번째 요소에 0 삽입

	for(int i = 1; i <= n; i++)
	{
		int temp;
		std::cin >> temp;
		nums.push_back(temp + nums[i - 1]); // 앞에서부터 바로 앞 요소를 더해서 벡터에 저장
	}

	for(int k = 0; k < m; k++)
	{
		int sum = 0;
		std::cin >> i >> j;
		sum = nums[j] - nums[i-1]; // 누적합끼리의 차로 정답 결정
		std::cout << sum << '\n';

	}

}
