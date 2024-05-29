#include <iostream>
#include <vector>

int main(void)
{
	std::ios_base::sync_with_stdio(false);
	std::cout.tie(NULL);
	std::cin.tie(NULL);
	int size, days;
	int max = -50000;
	std::vector<int> temperatures;
	temperatures.push_back(0);
	std::cin >> size >> days;
	for(int i = 1; i <= size; i++)
	{
		int temp;
		std::cin >> temp;
		temperatures.push_back(temp + temperatures[i - 1]);
	}
	for(int i = days; i <= size; i++)
	{
		if(max < temperatures[i] - temperatures[i-days])
		{
			max = temperatures[i] - temperatures[i - days];
		}
	}
	
	std::cout << max;
}
