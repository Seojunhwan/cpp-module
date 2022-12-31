#include "WrongAnimal.hpp"
#include <iostream>

/*
!  Orthodox Canonical Form
*/

WrongAnimal::WrongAnimal(void):_type("WrongAnimal") {
	std::cout << "WrongAnimal constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &obj) {
	std::cout << "WrongAnimal copy constructor called" << std::endl;
	*this = obj;
}

WrongAnimal::~WrongAnimal() {
	std::cout << "WrongAnimal destructor called" << std::endl;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& obj) {
	if (this != &obj) {
		this->_type = obj._type;
	}
	return *this;
}

/* 
!  Member functions
*/

std::string 	WrongAnimal::getType() const {
	return this->_type;
}

void	WrongAnimal::makeSound() const {
	std::cout << "WrongAnimal sound" << std::endl;
}
