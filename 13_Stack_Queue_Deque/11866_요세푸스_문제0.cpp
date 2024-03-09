#include <iostream>
#include <queue>

int main()
{
	std::queue<int> q;
	std::queue<int> q3;
	int n, k;
	std::cin >> n >> k;
	for (int i = 0; i < n; i++)
	{
		q.push(i + 1);
	}
	while (q3.size() < n)
	{
		for (int i = 0; i < k - 1; i++)
		{
			q.push(q.front());
			q.pop();
		}
		q3.push(q.front());
		q.pop();

	}

	std::cout << "<";
	while (q3.size() > 0)
	{
		if(q3.size() == 1) std::cout << q3.front();
		else std::cout << q3.front() << ", ";
		q3.pop();
	}
	std::cout << ">";
	return 0;
}
