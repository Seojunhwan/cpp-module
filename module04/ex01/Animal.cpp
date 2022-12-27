#include "Animal.hpp"
#include <iostream>

Animal::Animal(void):_type("Animal") {
	std::cout << "Animal constructor called" << std::endl;
}

Animal::Animal(const Animal &obj) {
	std::cout << "Animal copy constructor called" << std::endl;
	*this = obj;
}

Animal::~Animal() {
	std::cout << "Animal destructor called" << std::endl;
}

Animal& Animal::operator=(const Animal& obj) {
	if (this != &obj) {
		this->_type = obj._type;
	}
	return *this;
}

std::string 	Animal::getType() const {
	return this->_type;
}

void	Animal::makeSound() const {
	std::cout << "Animal sound" << std::endl;
}