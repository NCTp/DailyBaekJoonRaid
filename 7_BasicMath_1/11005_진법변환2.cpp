#include <iostream>
#include <cmath>
#include <algorithm> 

int main()
{
	int N; // number
	int B; // binary, decimal ...
	std::string  result; // return result
	
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


	std::cout << result << '\n';
	return 0;
}
