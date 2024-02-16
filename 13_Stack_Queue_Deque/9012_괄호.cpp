#include <iostream>
#include <string>

int main()
{
	int n;
	int r = 0, l = 0;
	bool isChecked = false;
	std::cin >> n;

	for (int i = 0; i < n; i++)
	{
		std::string temp;
		std::cin >> temp;
		for (int i = 0; i < temp.size(); i++)
		{
			if (temp[i] == ('('))
			{
				l++;
			}
			else if(temp[i] == (')'))
			{
				r++;
			}
			if (r > l&&!isChecked)
			{
				std::cout << "NO" << '\n';
				isChecked = true;
			}
		}
		if (l == r && !isChecked)
			std::cout << "YES" << '\n';
		else if (l > r && !isChecked)
			std::cout << "NO" << '\n';

		l = 0;
		r = 0;
		isChecked = false;
	}


}
