#include <iostream>

int main()
{
	/*
	1 -> 7 : 6 (6 * 1)  방 두개
	7 -> 19 : 12 (6 * 2) 방 세개
	19 -> 37 : 18 (6 * 3) 방 네개
	37 -> 61 : 24 (6 * 4)  방 다섯개 ...
	...

	*/
	int n;
	int temp = 1, count = 1;
	std::cin >> n;
	while (temp < n)
	{
		temp += count * 6;
		count++;
	}
	std::cout << count;
	return 0;
}
