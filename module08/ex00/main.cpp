#include "easyfind.hpp"
#include <vector>
#include <iostream>

int main(void) {
    std::vector<int> v;

    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    v.push_back(6);
    v.push_back(7);
    v.push_back(8);
    int i = easyfind(v, 5);
    std::cout << i << ":" << v[i] << std::endl;
    try
    {
        int i = easyfind(v, 10);
        std::cout << i << ":" << v[i] << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << "cannot find" << std::endl;
    }
    
}
