#include <iostream>
#include "stack.h"
#include "node.h"
using namespace std;

int Length;
Node Head;

Stack::Stack()
{
    Length = 0;
}

template <typename T>
void Stack::Push(T item)
{
    if (Length == 0)
    {
        Head = item;
    }
    else
    {
        Head.Next = item;
        Head = Head.Next;
    }
    Length = Length + 1;
}

template <typename T>
T Stack::Pop()
{
    Node temp = Head;
    Head = Head.Next;
    free(temp);
    Length = Length - 1;
    return Head.Value;
}

template <typename T>
T Stack::Peek()
{
    return Head.Value;
}