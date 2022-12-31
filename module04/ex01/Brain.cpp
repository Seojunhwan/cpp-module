#include "Brain.hpp"
#include <iostream>

/*
! Orthodox Canonical Form
*/

Brain::Brain(void) {
    std::cout << "Brain constructor called" << std::endl;
}

Brain::Brain(const Brain &obj) {
    *this = obj;
    std::cout << "Brain copy constructor called" << std::endl;
}

Brain::~Brain() {
    std::cout << "Brain destructor called" << std::endl;
}

Brain& Brain::operator=(const Brain &obj) {
    if (this != &obj) {
        for(int i = 0; i < 100; i++)
            this->_ideas[i] = obj._ideas[i];
    }
    std::cout << "Brain copy operator overloading" << std::endl;
    return *this;
}
