#include <iostream>

char sentences[5][15];

int main()
{
	for (int i = 0; i < 5; i++)
	{
		std::cin >> sentences[i];
	}


	for (int j = 0; j < 15; j++)
	{
		for (int i = 0; i < 5; i++)
		{
			if (sentences[i][j] != NULL)
				std::cout << sentences[i][j];
		}
	}

	return 0;

}
