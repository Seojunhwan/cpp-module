#include "easyfind.hpp"
#include <vector>

int main(void) {
    {
        std::vector<int> v;

        v.push_back(3);
        v.push_back(4);
        v.push_back(5);
        v.push_back(6);
        v.push_back(7);
        v.push_back(8);
        easyfind(v, 5);
        try
        {
            easyfind(v, 10);
        }
        catch(const std::exception& e)
        {
            std::cerr << "cannot find" << std::endl;
        }
    }
    {
        std::vector<int> v;

        v.push_back(3);
        v.push_back(4);
        v.push_back(5);
        v.push_back(6);
        v.push_back(7);
        v.push_back(8);
        easyfind(v, 8);
        try
        {
            easyfind(v, 5);
        }
        catch(const std::exception& e)
        {
            std::cerr << "cannot find" << std::endl;
        }
    }
}
