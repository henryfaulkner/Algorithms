#include <iostream>
#include "./traversal.h"
#include "../binary_node.h"
#include "../../helpers/helpers.h"
using namespace std;

int main()
{
    BinaryNode<int> *root = new BinaryNode<int>(1);
    root->left = new BinaryNode<int>(12);
    root->right = new BinaryNode<int>(9);
    root->left->left = new BinaryNode<int>(5);
    root->left->right = new BinaryNode<int>(6);

    Traversal t;
    t.PreOrderSearch(root);
    std::cout << endl;
    t.PostOrderSearch(root);
}