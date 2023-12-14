#include <iostream>
#include <cmath>
#include <algorithm> 

int main()
{
	int N; // number
	int B; // binary, decimal ...
	std::string  result; // return result
	//std::string reversedResult;
	
	std::cin >> N >> B;
	while (N != 0)
	{
		int temp = N % B;
		if (temp > 9)
		{
			temp = temp - 10 + 'A'; // 나머지 저장
			result += temp;
		}
		else
		{
			result += ('0' + temp);
		}
		N /= B;
	}

	std::reverse(result.begin(), result.end());
	/*
	for (int i = result.length(); i >= 0; i--)
	{
		reversedResult += result[i];
	}

	*/


	std::cout << result << '\n';
	return 0;
}
