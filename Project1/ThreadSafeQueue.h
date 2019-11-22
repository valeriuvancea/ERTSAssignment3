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
    bool pop(T& element)
    {
        std::lock_guard<std::mutex> lck(_mutex);

        if (_queue.empty()) {
            return false;
        }

        element = _queue.front();
        _queue.pop();

        return true;
    }

    void push(const T& element)
    {
        std::lock_guard<std::mutex> lck(_mutex);
        _queue.push(element);
    }
};

