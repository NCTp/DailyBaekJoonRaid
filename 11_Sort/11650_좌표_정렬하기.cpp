#include <iostream>
#include <vector>
#include <algorithm>

typedef struct
{
	int x;
	int y;
} coord;

int main()
{
	std::vector<coord> Coords;

	
	int n;

	std::cin >> n;

	for (int i = 0; i < n; i++)
	{
		coord temp;
		std::cin >> temp.x >> temp.y;
		Coords.push_back(temp);
	}
	/*
	for (int i = n - 1; i > 0; i--)
	{
		for (int j = 0; j < i; j++)
		{
			if (Coords[j].x > Coords[j + 1].x)
			{
				coord temp = Coords[j + 1];
				Coords[j + 1] = Coords[j];
				Coords[j] = temp;
			}
			else if (Coords[j].x == Coords[j + 1].x)
			{
				if (Coords[j].y > Coords[j+1].y)
				{
					coord temp = Coords[j + 1];
					Coords[j + 1] = Coords[j];
					Coords[j] = temp;
				}
			}
		}
	}

	// 시간 초과. 퀵 정렬을 사용해야 함.
	*/

	std::sort(Coords.begin(), Coords.end(), [](coord x, coord y) {

		if (x.x == y.x)
		{
			return x.y < y.y;
		}
		else
		{
			return x.x < y.x;
		}
		
		
		});
	// std::sort 의 성능이 압도적임.
	// 람다 함수를 잘 활용하면 무적임.

	for (int i = 0; i < n; i++)
	{
		std::cout << Coords[i].x << " " << Coords[i].y << "\n";
	}
}
