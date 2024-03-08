#include <iostream>
#include <string>
#include <queue>
int main()
{
	std::queue<int> q;
	int n, count = 1;
	std::cin >> n;

	for (int i = 0; i < n; i++)
	{
		q.push(i + 1);
	}

	while (q.size() > 1)
	{
		if (count % 2 == 1)
		{
			q.pop();
		}
		else
		{
			int temp = q.front();
			q.pop();
			q.push(temp);
		}
		count++;
	}
	std::cout << q.front();

	return 0;
}
