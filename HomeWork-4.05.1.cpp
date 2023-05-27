#include <iostream>
#include <vector>
#include "my_sqrt.h"

template<class T>
void print_vector(std::vector<T> tv) {
    for (int i = 0; i < tv.size() - 1; ++i) {
        std::cout << tv[i] << ", ";
    }
    std::cout << tv[tv.size() - 1] << std::endl;
}

int main()
{
    int i = 4;
    std::vector<int> vi = { -1, 4, 8 };
    std::cout << "[IN]: " << i << std::endl;
    std::cout << "[OUT]: " << my_sqrt<int>(i) << std::endl;
    std::cout << "[IN]: ";
    print_vector(vi);
    vi = my_sqrt(vi);
    std::cout << "[OUT]: ";
    print_vector(vi);
}