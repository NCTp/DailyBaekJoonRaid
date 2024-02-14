#include <iostream>

const int MAX_ITEMS = 1000000;
class MStack
{

public:
	MStack();
	int IsEmpty();
	void Push(int item);
	void Pop();
	int Top();
	void GetLength();
private:
	int top;
	int info[MAX_ITEMS];
};
MStack::MStack()
{
	top = -1;
}

int MStack::IsEmpty()
{
	if (top == -1)
		return 1;
	else
		return 0;
}

void MStack::Push(int item)
{
	top++;
	info[top] = item;
}

void MStack::Pop()
{
	if (IsEmpty())
	{
		std::cout << -1 << '\n';
	}
	else
	{
		std::cout << info[top] << '\n';
		top--;
	}

}

int MStack::Top()
{
	if (IsEmpty()) 
		return -1;
	else 
		return info[top];
}

void MStack::GetLength()
{
	std::cout << top + 1 << '\n';
}

int main()
{
	MStack _stack;

	std::cin.tie(0);
	std::ios::sync_with_stdio(false);
	int n;
	std::cin >> n;

	for (int i = 0; i < n; i++)
	{
		int temp;
		std::cin >> temp;
		switch (temp)
		{
		case 1:
			std::cin >> temp;
			_stack.Push(temp);
			break;
		case 2:
			_stack.Pop();
			break;
		case 3:
			_stack.GetLength();
			break;
		case 4:
			std::cout << _stack.IsEmpty() << '\n';
			break;
		case 5:
			std::cout << _stack.Top() << '\n';
			break;
		default:
			break;
		}
	}
}
