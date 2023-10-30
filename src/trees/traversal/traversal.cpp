#include <iostream>
#include "traversal.h"
#include "../binary_node.h"

Traversal::Traversal() {}

void Traversal::PreOrderSearch(BinaryNode<int> *head)
{
    if (!head)
        return;

    std::cout << head->Value << " -> ";
    PreOrderSearch(head->left);
    PreOrderSearch(head->right);
}

void Traversal::PostOrderSearch(BinaryNode<int> *head)
{
    if (!head)
        return;

    PostOrderSearch(head->left);
    PostOrderSearch(head->right);
    std::cout << head->Value << " -> ";
}

void Traversal::InorderSearch(BinaryNode<int> *head)
{
    if (!head)
        return;

    InorderSearch(head->left);
    std::cout << head->Value << " -> ";
    InorderSearch(head->right);
}