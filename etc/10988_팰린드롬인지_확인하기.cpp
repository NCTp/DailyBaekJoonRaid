#include <iostream>
#include <string>
#include <vector>

int main()
{
	std::string str;
	std::vector<char> str_;
	bool isPalindrome = true;
	std::cin >> str;

	for (int i = 0; i < str.size(); i++)
	{
		str_.push_back(str[i]);
	}

	for (int i = 0; i < str.size(); i++)
	{
		if (str_.back() != str[i]) isPalindrome = false;
		str_.pop_back();
	}

	std::cout << isPalindrome;
	
}
