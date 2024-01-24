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


	std::sort(Coords.begin(), Coords.end(), [](coord x, coord y) {

		if (x.y == y.y)
		{
			return x.x < y.x;
		}
		else
		{
			return x.y < y.y;
		}
		
		
		});

	for (int i = 0; i < n; i++)
	{
		std::cout << Coords[i].x << " " << Coords[i].y << "\n";
	}
}
