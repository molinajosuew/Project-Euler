#include "Queue.h"

Queue::Queue()
{
	Head = nullptr;
	Tail = Head;
}

void Queue::Enqueue(int value)
{
	if (Head == nullptr)
	{
		Head = new Node(value, nullptr, nullptr);
		Tail = Head;
	}
	else
	{
		Node* temporary = Tail;
		Tail = new Node(value, temporary, nullptr);
		temporary->Next = Tail;
	}
}

void Queue::Dequeue()
{
	if (Head == nullptr)
	{
		return;
	}

	Node* temporary = Head->Next;
	delete Head;
	Head = temporary;
}

int Queue::Peek()
{
	return Head->Value;
}


bool Queue::IsEmpty()
{
	return Head == nullptr;
}