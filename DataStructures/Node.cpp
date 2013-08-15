#include "Node.h"

Node::Node(int value, Node* previous, Node* next)
{
    Value = value;
    Previous = previous;
	Next = next;
}