#include "AAnimal.hpp"
#include <iostream>

/*
!  Orthodox Canonical Form
*/

AAnimal::AAnimal(void):_type("AAnimal") {
	std::cout << "AAnimal constructor called" << std::endl;
}

AAnimal::AAnimal(const AAnimal &obj) {
	std::cout << "AAnimal copy constructor called" << std::endl;
	*this = obj;
}

AAnimal::~AAnimal() {
	std::cout << "AAnimal destructor called" << std::endl;
}

AAnimal& AAnimal::operator=(const AAnimal& obj) {
	if (this != &obj) {
		this->_type = obj._type;
	}
	return *this;
}

/*
!  Member functions
*/

std::string 	AAnimal::getType() const {
	return this->_type;
}
