#include <iostream>
#include <string>

int main()
{
	std::string str;
	std::getline(std::cin, str);

	int count = 1;

	if (static_cast<int>(str[0] == 32 && str.length() == 1))
		count = 0;

	for (int i = 0; i < static_cast<int>(str.length()); i++)
	{
		if (static_cast<int>(str[i] == 32) && i != 0 && i != static_cast<int>(str.length())-1)
			count++;
	}
	std::cout << count;
}
