#ifndef TRAVERSAL_H
#define TRAVERSAL_H

#include "../binary_node.h"

class Traversal
{
public:
    Traversal();
    void PreOrderSearch(BinaryNode<int> *head);
    void PostOrderSearch(BinaryNode<int> *head);
    void InorderSearch(BinaryNode<int> *head);
};

#endif