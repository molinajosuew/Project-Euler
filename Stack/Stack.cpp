#include "Stack.h"

Stack::Stack()
{
	Head = nullptr;
}

void Stack::Push(int value)
{
	if (Head == nullptr)
	{
		Head = new Node(value);
	}
	else
	{
		Node* temporary = Head;
		Head = new Node(value, temporary);
	}
}

void Stack::Pop()
{
	if (Head == nullptr)
	{
		return;
	}

	Node* temporary = Head;
	Head = Head->Link;
	delete temporary;
}

int Stack::Top()
{    
	return Head->Value;
}

bool Stack::IsEmpty()
{
	return Head == nullptr;
}