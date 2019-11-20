#pragma once
#include <cstddef>
#include <string>
#include "StateInterface.h"

template <typename T>
class SingletonState: public StateInterface
{
    static T* _instance;
public:
    static T* GetInstance()
    {
        if (_instance == NULL)
        {
            _instance = new T();
        }
        return _instance;
    }

    std::string GetStateName()
    {
        std::string name = typeid(_instance).name();
        name = name.substr(std::string("class ").size());
        name = name.substr(0, name.size() - 2);
        return name;
    }
};
template <typename T>
T* SingletonState<T>::_instance = NULL;
