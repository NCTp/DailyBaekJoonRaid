#include <iostream>
#include <vector>
int main()
{
	int n, m; // 행렬의 크기 n x m
	std::vector<int> matrix1; // 첫번째 행렬
	std::vector<int> matrix2; // 두번째 행렬
	std::vector<int> result; // 더한 결과를 저장하는 행렬
	std::cin >> n >> m; 
	for (int i = 0; i < n * m * 2; i++)
	{
		if (i < n * m)
		{
			int temp;
			std::cin >> temp;
			matrix1.push_back(temp);
		}
		else
		{
			int temp;
			std::cin >> temp;
			matrix2.push_back(temp);
		}
	}

	for (int i = 0; i < n * m; i++)
	{
		result.push_back(matrix1[i] + matrix2[i]);
		if ((i + 1) % 3 == 0)
		{
			std::cout << result[i] << std::endl;
		}
		else
		{
			std::cout << result[i] << " ";
		}

	}


	return 0;
}
