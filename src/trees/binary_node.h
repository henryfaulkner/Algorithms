#ifndef BINARY_NODE_H
#define BINARY_NODE_H

template <typename T>
class BinaryNode
{
public:
    T Value;
    BinaryNode *left, *right;

    BinaryNode() : left(nullptr), right(nullptr) {}
    BinaryNode(const T &val) : Value(val), left(nullptr), right(nullptr) {}
};

#endif // BINARY_NODE_H
