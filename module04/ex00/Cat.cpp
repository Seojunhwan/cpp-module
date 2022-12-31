#include "Cat.hpp"
#include <iostream>

/*
!  Orthodox Canonical Form
*/

Cat::Cat(void) {
	this->_type = "Cat";
	std::cout << "Cat constructor called" << std::endl;
}

Cat::Cat(const Cat &obj) {
	std::cout << "Cat copy constructor called" << std::endl;
	*this = obj;
}

Cat::~Cat() {
	std::cout << "Cat destructor called" << std::endl;
}

Cat& Cat::operator=(const Cat& obj) {
	if (this != &obj) {
		this->_type = obj._type;
	}
	return *this;
}

/*
!  Member functions
*/

void	Cat::makeSound() const {
	std::cout << "Meow ~ Meow ~ Nyaong" << std::endl;
}