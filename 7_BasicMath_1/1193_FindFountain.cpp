#include <iostream>

int main()
{
	int n;
	int cross = 1;
	std::cin >> n;
	// 몇 번째 대각선인지?
	while (n > cross)
	{
		n -= cross;
		cross++;
	}
	// cross는 몇 번째 대각선인지를 저장
	// n은 cross번째 대각선의 n번째 원소
	// 짝수번째 대각선과 홀수번째 대각선
	if (cross % 2 == 0)
	{
		std::cout << n << "/" << cross + 1 - n;
	}
	else
	{
		std::cout << cross + 1 - n << "/" << n;
	}
	
}
