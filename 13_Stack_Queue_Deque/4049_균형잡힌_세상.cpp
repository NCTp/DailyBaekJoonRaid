#include <iostream>
#include <string>
#include <vector>
int main()
{
	std::string str;
	std::vector<char> chars;
	std::vector<int> opens;
	int s = 0, b = 0;
	bool isBalanced = true;
	bool isBigOpened = true;
	
	while (str != ".")
	{
		std::getline (std::cin, str);
		for (int i = 0; i < str.size(); i++)
		{
			if (str[i] == '[' || str[i] == ']' || str[i] == '(' || str[i] == ')' || str[i] == '.' || str[i] == ' ') chars.push_back(str[i]);
		}
	}
	
	for (int i = 0; i < chars.size() - 1; i++)
	{
		if (chars[i] == '.')
		{
			if (s != 0 || b != 0) isBalanced = false;
			if(isBalanced) std::cout << "yes" << '\n';
			else std::cout << "no" << '\n';
			s = 0;
			b = 0;
			isBalanced = true;
			opens.clear();
		}
		else
		{
			if (chars[i] == '[')
			{
				b++;
				opens.push_back(1);
				isBigOpened = true;
			}
			else if (chars[i] == ']')
			{
				if (!opens.empty())
				{
					if (opens.back() != 1) isBalanced = false;
					opens.pop_back();
				}
				b--;
			}
			else if (chars[i] == '(')
			{
				s++;
				opens.push_back(0);
				isBigOpened = false;
			}
			else if (chars[i] == ')')
			{
				s--;
				if (!opens.empty())
				{
					if (opens.back() != 0) isBalanced = false;
					opens.pop_back();
				}
			}

			if (b < 0 || s < 0) isBalanced = false;
		}

	}

}
