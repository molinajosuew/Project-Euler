#ifndef QUEUE_H
#define QUEUE_H

#include "Node.h"

class Queue
{
private:
    Node* Head;
    Node* Tail;

public:
    Queue();
    void Enqueue(int);
    void Dequeue();
    int Peek();
    bool IsEmpty();
};

#endif