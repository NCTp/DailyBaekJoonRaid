#include <iostream>
#include <cmath>
int main()
{
	std::string N; // number
	int B; // binary, decimal ...
	int result = 0; // return result

	std::cin >> N >> B;
	for (int i = 0; i < N.length(); i++)
	{
		int temp = static_cast<int>(N[i]); 
		int temp2; // saves the real number!
		//std::cout << temp << " ";
		if (temp >= '0' && temp <= '9')
		{
			temp2 = temp - static_cast<int>('0');
			//std::cout << temp2 << " ";
			
		}
		else
		{
			temp2 = static_cast<int>(N[i]) - static_cast<int>('A') + 10;
			//std::cout << temp2 << " ! " ;
		}
		result += temp2 * std::pow(B, (N.length() - i - 1));
		//std::cout << result << " ";
	}
	std::cout << result << '\n';
	return 0;
}