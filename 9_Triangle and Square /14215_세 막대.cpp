#include <iostream>
#include <algorithm>

int main()
{
	int input[3];

	std::cin >> input[0] >> input[1] >> input[2];

	std::sort(input, input+3);

	if (input[0] + input[1] <= input[2])
		input[2] = input[1] + input[0] - 1;

	std::cout << input[0] + input[1] + input[2];

	return 0;
}
