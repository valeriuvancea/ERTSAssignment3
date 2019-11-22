#pragma once
#include <queue>
#include <mutex>


template <typename T>
class ThreadSafeQueue
{
private:
    std::mutex _mutex;
    std::queue<T> _queue;

public:
    bool pop(T& element);
    void push(const T& element);
};

