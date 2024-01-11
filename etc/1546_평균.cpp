#include <iostream>
#include <vector>

int main()
{
	int n;
	int max = 0;
	double sum = 0;
	double result;
	std::vector<double> scores;
	std::cin >> n;

	for (int i = 0; i < n; i++)
	{
		int score;
		std::cin >> score;
		scores.push_back(score);
		if (max < scores[i])
			max = scores[i];
	}

	for (int i = 0; i < scores.size(); i++)
	{
		scores[i] = scores[i] / max * 100;
		sum += scores[i];
	}

	result = sum / scores.size();

	std::cout << result;

	return 0;

}
