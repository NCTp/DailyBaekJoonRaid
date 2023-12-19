#include <iostream>
#include <vector>
int main()
{
	int A, B;
	std::vector<std::string> results;

	std::cin >> A >> B;

	while (A != 0 || B != 0)
	{
		if (B % A == 0)
			results.push_back("factor\n");
		else if (A % B == 0)
			results.push_back("multiple\n");
		else
			results.push_back("neither\n");
		std::cin >> A >> B;
	}

	for (int i = 0; i < results.size(); i++)
	{
		std::cout << results[i];
	}

	return 0;
}
