#include <iostream>
#include <string>
int main()
{
	int n;
	std::cin >> n;
	for (int i = 0; i < n; i++)
	{
		int a, b;
		std::cin >> a >> b;
		std::cout << "Case #" << i+1 << ": " << a << " + " << b << " = " << a + b << "\n";
	}
	return 0;
}
