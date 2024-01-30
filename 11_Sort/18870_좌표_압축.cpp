#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

struct Coord
{
	int num;
	int idx;
	int ex_num;
};
int main()
{
	int n;
	std::vector<Coord> Coords;
	std::cin >> n;

	for (int i = 0; i < n; i++)
	{
		Coord temp;
		std::cin >> temp.num;
		temp.idx = i;
		temp.ex_num = temp.num;
		Coords.push_back(temp);
	}

	std::sort(Coords.begin(), Coords.end(), [](Coord a, Coord b)
		{
			return a.num < b.num;
		});

	for (int i = 0; i < n; i++)
	{
		Coords[i].num -= Coords[Coords.size() - 1].num;
	}

	for (int i = n-1; i > 0; i--)
	{
		if (Coords[i].num > Coords[i - 1].num)
		{
			if (Coords[i].ex_num == Coords[i - 1].ex_num)
				Coords[i - 1].num = Coords[i].num;
			else
				Coords[i - 1].num = Coords[i].num - 1;
		}
	}

	int min = Coords[0].num;
	for (int i = 0; i < n; i++)
	{
		Coords[i].num -= min;
	}

	std::sort(Coords.begin(), Coords.end(), [](Coord a, Coord b)
		{
			return a.idx < b.idx;
		});

	for (int i = 0; i < n; i++)
	{
		std::cout << Coords[i].num << " ";
	}

}
