#include "Cat.hpp"
#include <iostream>

/*
!  Orthodox Canonical Form
*/

Cat::Cat(void) {
	this->_type = "Cat";
	this->_brain = new Brain();
	std::cout << "Cat constructor called" << std::endl;
}

Cat::Cat(const Cat &obj) {
	this->_brain = new Brain();
	*this = obj;
	std::cout << "Cat copy constructor called" << std::endl;
}

Cat::~Cat() {
	delete _brain;
	std::cout << "Cat destructor called" << std::endl;
}

Cat& Cat::operator=(const Cat& obj) {
	std::cout << "Cat copy assignment operator" << std::endl;
	if (this != &obj) {
		this->_type = obj._type;
		*(this->_brain) = *(obj._brain);
	}
	return *this;
}

/*
!  Member functions
*/

void	Cat::makeSound() const {
	std::cout << "Meow ~ Meow ~ Nyaong" << std::endl;
}
