#include <iostream>
#include <string>
int main()
{
	int n;
	int sum = 0;
	bool isGroupWord = true;
	std::string str;
	std::cin >> n;

	while (n--)
	{
		isGroupWord = true;
		std::cin >> str;

		for (int i = 1; i < str.size(); i++)
		{
			if (str[i] != str[i - 1])
			{
				for (int j = 0; j < i; j++)
				{
					if (str[i] == str[j]) isGroupWord = false;
				}
			}
		}

		if (isGroupWord) sum++;
	}

	std::cout << sum;
	return 0;
}
