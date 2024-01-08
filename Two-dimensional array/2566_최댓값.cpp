#include <iostream>

int main()
{
	int temp[9][9] = { 0 };
	int max = 0;
	int maxX, maxY;
	for (int i = 0; i < 9; i++)
	{
		for (int j = 0; j < 9; j++)
		{
			std::cin >> temp[i][j];
			if (max <= temp[i][j])
			{
				max = temp[i][j];
				maxX = i + 1;
				maxY = j + 1;
			}
		}
	}

	std::cout << max << "\n" << maxX << " " << maxY;

	return 0;
}
