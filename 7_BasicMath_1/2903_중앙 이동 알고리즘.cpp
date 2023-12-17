#include <iostream>
#include <cmath>
int main()
{
	int points = 4; // number of points

	int N; // number of trials
	std::cin >> N;

	for (int i = 0; i < N; i++)
	{
		points = std::pow(std::sqrt(points) * 2 - 1, 2);
	}

	std::cout << points;
	
	return 0;
}
