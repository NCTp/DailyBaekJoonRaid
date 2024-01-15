#include <iostream>
#include <string>

int main()
{
	int N;
	int count = 0;
	std::string s_title;
	int i_title = 666;

	std::cin >> N;

	while (true) // for문도 활용 가능. (for int i = 666; ; i++) 이런식으로.
	{
		s_title = std::to_string(i_title);

		if (s_title.find("666") != -1)
		{
			count++;
			if (count == N)
			{
				std::cout << i_title;
				return 0;
			}
		}

		i_title++;
	}
	return 0;
}
