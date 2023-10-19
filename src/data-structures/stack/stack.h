#ifndef STACK_H
#define STACK_H

class Stack
{
public:
    int length;
    Stack();
    template <typename T>
    void Push(T item);
    template <typename T>
    T Pop();
    template <typename T>
    T Peek();
};

#endif // STACK_H