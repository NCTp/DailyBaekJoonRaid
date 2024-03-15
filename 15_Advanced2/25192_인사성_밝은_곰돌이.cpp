#include <iostream>
#include <set>
int main()
{
	int n, sum = 0;
	std::string name;
	std::set <std::string> names;

	std::cin.tie(0);
	std::ios::sync_with_stdio(false);
	std::cin >> n;

	while (n--)
	{
		std::cin >> name;

		if (name == "ENTER")
		{
			sum += names.size();
			names.clear();
		}
		else names.insert(name);

	}

	sum += names.size();
	std::cout << sum;

	return 0;
}
