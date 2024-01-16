#include <iostream>
#include <string>

// 문제 잘 읽어라..
// 결국 검색해서 푼 문제.
std::string board[50];

std::string WB[8] = {
		"WBWBWBWB",
		"BWBWBWBW",
		"WBWBWBWB",
		"BWBWBWBW",
		"WBWBWBWB",
		"BWBWBWBW",
		"WBWBWBWB",
		"BWBWBWBW"
};

std::string BB[8] = {
		"BWBWBWBW",
		"WBWBWBWB",
		"BWBWBWBW",
		"WBWBWBWB",
		"BWBWBWBW",
		"WBWBWBWB",
		"BWBWBWBW",
		"WBWBWBWB"
};

int Cnt_White(int x, int y)
{
	int count = 0;

	for (int i = 0; i < 8; i++)
	{
		for (int j = 0; j < 8; j++)
		{
			if (WB[i][j] != board[i + x][j + y]) count++;
		}
	}
	return count;
}
int Cnt_Black(int x, int y)
{
	int count = 0;

	for (int i = 0; i < 8; i++)
	{
		for (int j = 0; j < 8; j++)
		{
			if (BB[i][j] != board[i + x][j + y]) count++;
		}
	}
	return count;
}


int main()
{
	int N, M;
	std::cin >> N >> M;

	int minVal = 12345;

	for (int i = 0; i < N; i++)
	{
		std::cin >> board[i];
	}

	for (int i = 0; i <= N - 8; i++)
	{
		for (int j = 0; j <= M - 8; j++)
		{
			int temp;
			temp = std::min(Cnt_Black(i, j), Cnt_White(i, j));
			if (minVal > temp) minVal = temp;
		}
	}

	std::cout << minVal;
	return 0;
}
