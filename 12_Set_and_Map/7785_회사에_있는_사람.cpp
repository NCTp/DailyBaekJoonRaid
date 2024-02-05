#include <iostream>
#include <map>
#include <string>

int main()
{
	int n;
	std::string user;
	std::string action;
	std::map<std::string, int> Users;


	std::cin.tie();
	std::ios::sync_with_stdio(0);
	std::cin >> n;

	for (int i = 0; i < n; i++)
	{
		std::cin >> user >> action;
		if (action == "enter")
		{
			Users.insert({ user, 1 });
		}
		else
		{
			if (Users.find(user) != Users.end())
				Users.erase(user);
		}	
	}

	for (std::map<std::string, int>::reverse_iterator it= Users.rbegin(); it != Users.rend(); ++it)
	{
		std::cout << it->first << '\n';
	}
}
