#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

struct User
{
	int num;
	int age;
	std::string name;
};
int main()
{
	int n;
	std::cin >> n;
	std::vector<User> Users;

	for (int i = 0; i < n; i++)
	{
		User _user;
		std::cin >> _user.age >> _user.name;
		_user.num = i;
		Users.push_back(_user);
	}

	std::sort(Users.begin(), Users.end(), [](User a, User b) {

		if (a.age == b.age)
		{
			return a.num < b.num;
		}
		else
		{
			return a.age < b.age;
		}

		});

	for (int i = 0; i < Users.size(); i++)
	{
		std::cout << Users[i].age << " " << Users[i].name << '\n';
	}
}
