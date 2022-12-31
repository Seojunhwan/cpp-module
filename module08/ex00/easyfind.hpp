#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <algorithm>

template <typename T>
int easyfind(T &c, int n) {
    typename T::iterator it = std::find(c.begin(), c.end(), n);
    if (it == c.end()) {
        throw std::exception();
    }
    return *it;
};

#endif
