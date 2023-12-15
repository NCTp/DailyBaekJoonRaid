#include <iostream>
#include <cmath>
int main()
{
	int T; // number of test cases
	int C; // Test case
	int result[4]; // Result
	//int *results = new int[T];

	std::cin >> T;

	int *results = new int[T];

	for (int i = 0; i < T; i++)
	{
		std::cin >> C;

		result[0] = C / 25;
		C = C % 25;
		result[1] = C / 10;
		C = C % 10;
		result[2] = C / 5;
		C = C % 5;
		result[3] = C / 1;

		std::cout << result[0] << " " << result[1] << " " << result[2] << " " << result[3] << "\n";

	}


	return 0;
}
