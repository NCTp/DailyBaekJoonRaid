#include <iostream>
#include <vector>

int main()
{
	// 선언할 때, 자료형에 주의. 실수형의 연산와 정수형의 연산은 결과가 완전히 다르다.
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
