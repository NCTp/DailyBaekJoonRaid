#include <iostream>
#include <string>

int main()
{
	std::string str;
	int time = 0;
	std::cin >> str;
	for (int i = 0; i < str.length(); i++)
	{
		// A ~ Z == 0 ~ 25, 25 / 3 = 8...1 Z 는 9니까 3으로 나눈 몫에 + 1을 해주먄 된다.
		if (str.length() > 0)
		{
			time += 2;
			if (static_cast<int>(str[i] - 65) >= 0) 
			{
        // 중간중간 네 알파벳으로 이루어진 부분을 고려해 예외처리
				if (static_cast<int>(str[i]) - 65 == 18)
				{
					time += (static_cast<int>(str[i]) - 65) / 3;
				}
				else if (static_cast<int>(str[i]) - 65 == 21)
				{
					time += (static_cast<int>(str[i]) - 65) / 3;
				}
				else if (static_cast<int>(str[i]) - 65 >= 22)
				{
					time += 8;
				}
				else {
					time += (static_cast<int>(str[i]) - 65) / 3 + 1;
				}
				//time += (static_cast<int>(str[i]) - 65) / 3 + 1;
				

			}
		}
	}
	std::cout << time;
	return 0;
}
