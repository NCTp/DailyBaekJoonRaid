#include <iostream>
#include <vector>
int main()
{
	//1. x좌표와 y좌표의 최솟값을 각 좌표의 x,y좌표에서 뺀다.
	//2. 그렇게 나온 좌표들의 x,y값에서 최댓값을 찾아 곱한다.

	int n, maxX, maxY; // 좌표의 수
	int minX = 10001, minY = 10001;
	std::vector<std::vector<int>> coords;
	std::cin >> n;

	for (int i = 0; i < n; i++)
	{
		int _x,_y;
		std::vector<int> coord;
		std::cin >> _x >> _y;

		if (minX >= _x)
		{
			minX = _x;
		}
		if (minY >= _y)
		{
			minY = _y;
		}

		coord.push_back(_x);
		coord.push_back(_y);
		coords.push_back(coord);
	}

	if (n < 2)
	{
		std::cout << 0;
		return 0;
	}

	maxX = coords[0][0] - minX;
	maxY = coords[0][1] - minY;

	//std::cout << " " << minX << " " << minY << std::endl;

	for (int i = 0; i < coords.size(); i++)
	{
		coords[i][0] -= minX;
		coords[i][1] -= minY;
		if (maxX <= coords[i][0])
			maxX = coords[i][0];
		if (maxY <= coords[i][1])
			maxY = coords[i][1];
	}

	std::cout << maxX * maxY;

	return 0;
}
