#include <iostream>
#include <vector>
int main()
{
	// 짝짓기 문제.짝지어지지 않는 숫자가 (x4, y4) 에 들어갈 좌표가 된다.
	int x1, y1, x2, y2, x3, y3, x4, y4;
	
	std::cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;

	if (x1 == x2)
		x4 = x3;
	else if (x1 == x3)
		x4 = x2;
	else
		x4 = x1;

	if (y1 == y2)
		y4 = y3;
	else if (y1 == y3)
		y4 = y2;
	else
		y4 = y1;

	std::cout << x4 << " " << y4;


	return 0;
}
