#include <iostream>
#include <string>
int main()
{
	int n;
	std::string str;
	std::cin >> n;
	while (n--)
	{
		std::cin >> str;
		std::cout << str.front() << str.back() << '\n';
	}



	return 0;
}
