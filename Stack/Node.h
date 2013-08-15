#ifndef NODE_H
#define NODE_H

struct Node
{
    int Value;
    Node* Link;

    Node(int, Node* = nullptr);
};

#endif