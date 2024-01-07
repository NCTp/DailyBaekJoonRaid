#include <iostream>

int main()
{
	// 2차원 배열 속 색종이가 붙은 부분들을 1로 바꿔주고, 그 갯수를 세면 된다.
	int n, sum = 0;
	int paper[100][100] = { 0 };

	std::cin >> n;

	while (n > 0)
	{
		int x, y;
		std::cin >> x >> y;
		for (int i = x; i < x + 10; i++)
		{
			for (int j = y; j < y + 10; j++)
			{
				paper[i][j] = 1;
			}
		}
		n--;
	}

	for (int i = 0; i < 100; i++)
	{
		for (int j = 0; j < 100; j++)
		{
			if (paper[i][j] == 1)
				sum++;
		}
	}

	std::cout << sum;

	return 0;
}
