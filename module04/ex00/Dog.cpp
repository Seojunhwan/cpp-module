#include "Dog.hpp"
#include <iostream>

Dog::Dog(void) {
	this->_type = "Dog";
	std::cout << "Dog constructor called" << std::endl;
}

Dog::Dog(const Dog &obj) {
	std::cout << "Dog copy constructor called" << std::endl;
	*this = obj;
}

Dog::~Dog() {
	std::cout << "Dog destructor called" << std::endl;
}

Dog& Dog::operator=(const Dog& obj) {
	if (this != &obj) {
		this->_type = obj._type;
	}
	return *this;
}

void	Dog::makeSound() const {
	std::cout << "Wal Wal !" << std::endl;
}