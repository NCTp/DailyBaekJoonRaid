#include <iostream>
#include <stdio.h>
#include <vector>
#include <string>
int main()
{
	int alpha[26] = { 0, };
	int maxidx = 0;
	bool isSame = false;
	std::string str;
	std::cin >> str;
	for (int i = 0; i < static_cast<int>(str.length()); i++)
	{
		int idx = static_cast<int>(str[i]);
		if (idx < 65 && idx > 122)
			break;
		if (idx < 97)
			alpha[idx - 65]++;
		else if(idx >= 97)
			alpha[idx - 97]++; 
	}
	for (int i = 1; i < 26 ; i++)
	{
		if (alpha[i] > alpha[maxidx])
		{
			isSame = false;
			maxidx = i;
		}
		else if (alpha[i] == alpha[maxidx] && alpha[maxidx] > 0 && alpha[i] > 0)
		{
			isSame = true;
		}
	}
	if (isSame)
		std::cout << "?";
	else
		std::cout << static_cast<char>(maxidx + 65);
	
	

}
