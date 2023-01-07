#include "Conversion.hpp"
#include <iostream>

/*
! Orthodox Canonical Form
*/
Conversion::Conversion(void): _str("42") {
	this->_double = this->_isChar() ? static_cast<double>(this->_str[0]) : std::strtod(_str.c_str(), NULL);
}

Conversion::Conversion(std::string	str): _str(str) {
	this->_double = this->_isChar() ? static_cast<double>(str[0]) : std::strtod(_str.c_str(), NULL);
}

Conversion::Conversion(const Conversion &obj) {
	*this = obj;
}

Conversion::~Conversion() {

}

Conversion& Conversion::operator=(const Conversion& obj) {
	if (this != &obj) {
		this->_double = obj._double;
		this->_str = obj._str;
	}
	return *this;
}

bool		Conversion::_isChar() const {
	return this->_str.length() == 1 && !std::isdigit(this->_str[0]);
}

void	Conversion::putChar() const {
	char	c = static_cast<char>(this->_double);
	double	d = static_cast<double>(c);

	std::cout << "char: ";
	if (c > 0 ? floor(_double) == d : ceil(_double) == d) {
		if (std::isprint(c))
			std::cout << '\'' << c << '\'' << std::endl;
		else
			std::cout << "Non displayable" << std::endl;
	} else {
		std::cout << "impossible" << std::endl;
	}
}

void	Conversion::putInt() const {
	int		i = static_cast<int>(this->_double);
	double	d = static_cast<double>(i);

	std::cout << "int: ";
	if (i > 0 ? floor(_double) == d : ceil(_double) == d) {
		std::cout << i << std::endl;
	} else {
		std::cout << "impossible" << std::endl;
	}
}

void	Conversion::putFloat() const {
	float f = static_cast<float>(_double);

	std::cout << "float: ";
	if (isinf(f) && !isinf(_double))
		std::cout << "impossible" << std::endl;
	else
		std::cout << f << 'f' << std::endl;
}

void	Conversion::putDouble() const {
	std::cout << "double: " << _double << std::endl; 
}