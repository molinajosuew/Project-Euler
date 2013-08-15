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
        Head = new Node(value, nullptr);
        Tail = Head;
    }
    else
    {
        Node* temporary = Tail;
        Tail = new Node(value, temporary);
        temporary->Link = Tail;
    }
}

void Queue::Dequeue()
{
    if (Head == nullptr)
    {
        return;
    }

    Node* temporary = Head->Link;
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