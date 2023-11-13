#ifndef Array_HPP
#define Array_HPP

#include <iostream>

class sad;

template <typename T>
class Array {
    private:
        T *arr;
    public:
        Array();
        Array(unsigned int n);
        Array(const Array& other);
        ~Array();
        Array& operator=(const Array& other); 
};

Array::Array():arr(new(T[])){}

Array::Array(unsigned int n):arr(new(T[n])){}

Array::Array(const Array& other) {
}

Array::~Array() {
}

Array& Array::operator=(const Array& other) {
    if (this != &other) {
    }
    return *this;
}



#endif // Array_HPP
