#ifndef NODE_H
#define NODE_H

template <typename T>
class Node
{
public:
    T Value;
    Node *Next;

    Node() : Next(nullptr) {}
    Node(const T &val) : Value(val), Next(nullptr) {}
};

#endif // NODE_H
