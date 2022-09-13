#include <iostream>

int main()
{
	// b와 c가 같이 증가함, 따라서 b가 c보다 높으면 손익분기점은 넘을 수가 없음
	// c - b 는 고정비용을 제외했을 때 순이익임. 고정비용을 이로 나눠지는 값에
	// 1을 더하면 그곳이 바로 손익분기점이다.
	int a, b, c;
	int counts = 0;
	std::cin >> a >> b >> c;

	if (c <= b)
	{
		std::cout << -1;
		return 0;
	}

	std::cout << a / (c - b) + 1;

	return 0;
}
