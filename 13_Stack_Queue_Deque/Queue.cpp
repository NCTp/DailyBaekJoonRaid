#include <iostream>
#include <string>

const int MAX_ITEMS = 3;
template <class ItemType>
class Queue
{
private:
	int length;
	int rear;
	int front;
	ItemType items[MAX_ITEMS];

public:
	Queue();
	void Push(ItemType item);
	void Pop();
	int Size();
	bool Empty();
	void Front();
	void Back();

};
template <class ItemType>
Queue<ItemType>::Queue()
{
	length = 0;
	front = 0;
	rear = -1;
}
template <class ItemType>
void Queue<ItemType>::Push(ItemType item)
{
	if (length < MAX_ITEMS)
	{
		rear = (rear+ 1) % MAX_ITEMS;
		items[rear] = item;
		length++;
	}
	else
	{
		std::cout << "List is Full" << '\n';
	}
}
template <class ItemType>
void Queue<ItemType>::Pop()
{
	if (Empty()) std::cout << -1 << '\n';
	else
	{
		std::cout << items[front] << '\n';
		front = (front + 1) % MAX_ITEMS;
		length--;
	}
}
template <class ItemType>
int Queue<ItemType>::Size()
{
	return rear - front + 1;
}
template <class ItemType>
bool Queue<ItemType>::Empty()
{
	return length == 0;
}
template <class ItemType>
void Queue<ItemType>::Front()
{
	if (Empty()) std::cout << -1 << '\n';
	else std::cout << items[front] << '\n';
}
template <class ItemType>
void Queue<ItemType>::Back()
{
	if (Empty()) std::cout << -1 << '\n';
	else std::cout << items[rear] << '\n';
}

int main()
{
	Queue<int> queue;
	std::string input;
	int n, newItem;

	std::cin.tie(0);
	std::ios::sync_with_stdio(false);

	std::cin >> n;
	while (n--)
	{
		std::cin >> input;
		if (input == "push")
		{
			std::cin >> newItem;
			queue.Push(newItem);
		}
		else if (input == "pop")
		{
			queue.Pop();
		}
		else if (input == "size")
		{
			std::cout << queue.Size() << '\n';
		}
		else if (input == "empty")
		{
			std::cout << queue.Empty() << '\n';
		}
		else if (input == "front")
		{
			queue.Front();
		}
		else if (input == "back")
		{
			queue.Back();
		}
	}

}
