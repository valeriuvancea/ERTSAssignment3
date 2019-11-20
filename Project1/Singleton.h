#pragma once
#include <cstddef>

template <typename T>
class Singleton
{
    static T* _instance;
public:
    static T* GetInstance()
    {
        if (_instance == NULL)
        {
            _instance = new T;
        }
        return _instance;
    }
};
template <typename T>
T* Singleton<T>::_instance = NULL;
