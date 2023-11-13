#ifndef Iter_hpp
#define Iter_hpp

#include <iostream>

template <typename T>
void fun(T element) {
    std::cout << element << " ";
}

template <typename T, typename Func>
void iter(T* array, size_t length, Func func) {
    for (size_t i = 0; i < length; i++)
        func(array[i]);
}

#endif