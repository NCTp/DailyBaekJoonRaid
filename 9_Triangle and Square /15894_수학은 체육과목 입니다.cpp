#include <iostream>

int main()
{
	// 밑줄: n
	// 옆줄: 2n (2 + 매층마다 +2)
	// 윗줄 n  

	long n, result; //  (1 ≤ n ≤ 10^9)
	std::cin >> n;

	result = 4 * n;

	std::cout << result;
	return 0;
}
