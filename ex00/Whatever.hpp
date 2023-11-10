#ifndef Whatever_HPP
#define Whatever_HPP

#include <iostream>

template <class myType>
myType max (myType a, myType b) { return (a > b ? a : b); }

template <class myType>
myType min (myType a, myType b) { return (a < b ? a : b); }

template <class myType>
void swap (myType &a, myType &b) {
    myType tmp = a;
    a = b;
    b = tmp;
}
#endif