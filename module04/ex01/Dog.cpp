#include "Dog.hpp"
#include <iostream>

/*
!  Orthodox Canonical Form
*/

Dog::Dog(void) {
	this->_type = "Dog";
	this->_brain = new Brain();
	std::cout << "Dog constructor called" << std::endl;
}

Dog::Dog(const Dog &obj) {
	this->_brain = new Brain();
	*this = obj;
	std::cout << "Dog copy constructor called" << std::endl;
}

Dog::~Dog() {
	delete _brain;
	std::cout << "Dog destructor called" << std::endl;
}

Dog& Dog::operator=(const Dog& obj) {
	std::cout << "Dog copy assignment operator" << std::endl;
	if (this != &obj) {
		this->_type = obj._type;
		*(this->_brain) = *(obj._brain);
	}
	return *this;
}

/*
!  Member functions
*/

void	Dog::makeSound() const {
	std::cout << "Wal Wal !" << std::endl;
}
