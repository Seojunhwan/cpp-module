#include "WrongCat.hpp"
#include <iostream>

/*
!  Orthodox Canonical Form
*/

WrongCat::WrongCat(void) {
	this->_type = "WrongCat";
	std::cout << "WrongCat constructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat &obj) {
	std::cout << "WrongCat copy constructor called" << std::endl;
	*this = obj;
}

WrongCat::~WrongCat() {
	std::cout << "WrongCat destructor called" << std::endl;
}

WrongCat& WrongCat::operator=(const WrongCat& obj) {
	if (this != &obj) {
		this->_type = obj._type;
	}
	return *this;
}

/*
!  Member functions
*/

void	WrongCat::makeSound() const {
	std::cout << "Meow ~ Meow ~ Nyaong" << std::endl;
}
