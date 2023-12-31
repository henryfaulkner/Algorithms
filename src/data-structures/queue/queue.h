#ifndef QUEUE_H
#define QUEUE_H

class Queue
{
public:
    int length;
    Queue();
    template <typename T>
    void Enqueue(T item);
    template <typename T>
    T Deque();
    template <typename T>
    T Peek();
};

#endif // QUEUE_H