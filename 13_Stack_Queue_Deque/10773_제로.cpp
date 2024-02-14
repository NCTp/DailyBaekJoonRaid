#include <iostream>

const int MAX_ITEMS = 100000;
class MStack
{

public:
	MStack();
	int IsEmpty();
	void Push(int item);
	void Pop();
	int Top();
	void GetLength();
	int Sum();
private:
	int top;
	int sum;
	int info[MAX_ITEMS];
};
MStack::MStack()
{
	top = -1;
	sum = 0;
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
	sum += item;
}

void MStack::Pop()
{
	if (IsEmpty())
	{
		//std::cout << -1 << '\n';
	}
	else
	{
		//std::cout << info[top] << '\n';
		sum -= info[top];
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

int MStack::Sum()
{
	return sum;
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
		if (temp == 0)
			_stack.Pop();
		else
		{
			_stack.Push(temp);
		}
	}

	std::cout << _stack.Sum(); 
}
