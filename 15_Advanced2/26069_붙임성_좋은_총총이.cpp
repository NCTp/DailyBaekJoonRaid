#include <iostream>
#include <algorithm>
#include <set>
int main()
{
	int n, sum = 0;
	std::string name1, name2;
	std::set <std::string> names; // 춤추고 있는 사람들

	std::cin >> n;

	while (n--)
	{
		std::cin >> name1 >> name2;
		if (name1 == "ChongChong") names.insert(name2); // 한쪽이 춤을 추고 있으면 set에 추가
		if (name2 == "ChongChong") names.insert(name1); // 한쪽이 춤을 추고 있으면 set에 추가
		if (std::find(names.begin(), names.end(), name1) != names.end()) names.insert(name2); // 한쪽이 춤을 추고 있으면 set에 추가
		if (std::find(names.begin(), names.end(), name2) != names.end()) names.insert(name1);
	}

	std::cout << names.size();

	return 0;
}
