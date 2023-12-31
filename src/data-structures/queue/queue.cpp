#include <iostream>
#include "queue.h"
#include "node.h"
using namespace std;

int Length;
Node Head;
Node Tail;

Queue::Queue()
{
    Length = 0;
}

template <typename T>
void Queue::Enqueue(T item)
{
    if (Length == 0)
    {
        Head = item;
        Tail = item;
    }
    else
    {
        Tail.Next = item;
        Tail = Tail.Next;
    }
    Length = Length + 1;
}

template <typename T>
T Queue::Deque()
{
    if (head = NULL)
    {
        return NULL;
    }

    Length = Length - 1;
    Head = Head.Next;

    free(Head.Next);

    return Head.Value;
}

template <typename T>
T Queue::Peek()
{
    return head.Value;
}
