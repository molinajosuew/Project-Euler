#ifndef NODE_H
#define NODE_H

struct Node
{
    int Value;
    Node* Previous;
    Node* Next;

    Node(int, Node* = nullptr, Node* = nullptr);
};

#endif