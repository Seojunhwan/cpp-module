#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <algorithm>
#include <iostream>

template <typename T>
void    easyfind(T &c, int n) {
    typename T::iterator it;

    it = std::find(c.begin(), c.end(), n);

    if (it == c.end()) {
        throw std::exception();
    }

    std::cout << "found it!!" << std::endl;
}

#endif
