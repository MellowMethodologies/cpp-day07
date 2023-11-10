#include "iter.hpp"

template <typename T>
void fun(T element) {
    std::cout << element << " ";
}


int main()
{
    std::string arr[5] = {"aaa","asd","asda","asda","sad"};
    iter(arr, 5, fun<std::string>);
    std::cout<< std::endl;
    int amm[5] = {123,456,98,89,456};
    iter(amm, 5, fun<int>);
}