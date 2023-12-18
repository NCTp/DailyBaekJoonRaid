#include <iostream>

int main()
{
	int V; // length of tree
	int A; // distance of moving above
	int B; // distance of falling down
	int result = 1;

	std::cin >> A >> B >> V;
	
	V = V - A;

	result += V % (A-B) != 0 ? V / (A - B) + 1 : V / (A - B);

	std::cout << result;

	return 0;
}
