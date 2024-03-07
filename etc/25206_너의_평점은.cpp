#include <iostream>
#include <string>
int main()
{
	std::string subject;
	float credit, creditSum = 0;
	std::string score;
	float scoreSum = 0;

	for (int i = 0; i < 20; i++)
	{
		std::cin >> subject >> credit >> score;
		if (score == "A+") scoreSum += credit * 4.5;
		else if (score == "A0") scoreSum += credit * 4.0;
		else if (score == "B+") scoreSum += credit * 3.5;
		else if (score == "B0") scoreSum += credit * 3.0;
		else if (score == "C+") scoreSum += credit * 2.5;
		else if (score == "C0") scoreSum += credit * 2.0;
		else if (score == "D+") scoreSum += credit * 1.5;
		else if (score == "D0") scoreSum += credit * 1.0;
		else if (score == "F") scoreSum += credit * 0.0;
		
		if(score != "P") creditSum += credit;

	}

	std::cout << scoreSum / creditSum;


	return 0;
}
