#ifndef Array_HPP
#define Array_HPP

#include <iostream>

template <typename T>
class Array {
    private:
        T *arr;
        unsigned int n;
    public:
        Array();
        Array(unsigned int n);
        Array(const Array& other);
        ~Array();
        unsigned int size() const;
        Array& operator=(const Array& other); 
        T& operator[]( unsigned int i ) const;
        class OutOfBoundsException : public std::exception {
            public:
                virtual const char* what() const throw();
        };
};

template < typename T >
unsigned int Array<T>::size() const
{
    return this->n;
}

template < typename T >
T& Array<T>::operator[]( unsigned int i ) const {
    if ( i >= n)
        throw OutOfBoundsException();
    return arr[i];
}

template < typename T >
const char *Array<T>::OutOfBoundsException::what() const throw() {
    return "Out of bounds";
}

template < typename T >
Array<T>::Array():arr(NULL),n(0){}

template < typename T >
Array<T>::Array(unsigned int n)
{
    arr = new T[n];
    this->n = n;
    for(unsigned int i = 0; i < n; i++)
    {
        this->arr[i] = T();
    }
}

template < typename T >
Array<T>::Array(const Array& other) {
    this->arr = NULL;
    *this = other;
}

template < typename T >
Array<T>::~Array() {
    delete[] this->arr;
}

template < typename T >
Array<T>& Array<T>::operator=(const Array& other) {
    if (this != &other) {
        delete[] this->arr;
        this->n = other.n;
        this->arr = new T[this->n];
        for (unsigned int i = 0; i < this->n; i++) {
            this->arr[i] = other.arr[i];
        }
    }
    return *this;
}



#endif // Array_HPP
