#ifndef STACK_H
#define STACK_H

#include "Node.h"

class Stack
{
private:
    Node* Head;

public:
    Stack();
    void Push(int);
    void Pop();
    int Top();
    bool IsEmpty();
};

#endif