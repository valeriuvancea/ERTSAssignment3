#include "ThreadSafeQueue.h"


template <typename T>
bool ThreadSafeQueue<T>::pop(T& element)
{
    std::lock_guard<std::mutex> lck(_mutex);
    
    if (_queue.empty()) {
        return false;
    }

    element = _queue.front();
    _queue.pop();

    return true;
}

template <typename T>
void ThreadSafeQueue<T>::push(const T& element)
{
    std::lock_guard<std::mutex> lck(_mutex);
    _queue.push(element);
}