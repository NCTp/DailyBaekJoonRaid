#include <iostream>
#include <map>

int main()
{
	int n, m, sum = 0;
	std::cin >> n >> m;
	
	std::map <int, bool> map1;

	for (int i = 0; i < n + m; i++)
	{
		int temp;
		std::cin >> temp;
		if (map1[temp] == true)
			map1.erase(temp);
		else
			map1[temp] = true;
	}



	std::cout << map1.size();

	return 0;

}
