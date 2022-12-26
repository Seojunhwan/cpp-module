#include "FragTrap.hpp"
#include <iostream>

/*
! Orthodox Canonical Form
*/

FragTrap::FragTrap(void) : ClapTrap("default FragTrap") {
	_health_point = 100;
	_energy = 100;
	_attack_damage = 30;
	std::cout << "FragTrap " << _name << " constructor called." << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name) {
	_health_point = 100;
	_energy = 100;
	_attack_damage = 30;
	std::cout << "FragTrap " << _name << " constructor called." << std::endl;
}

FragTrap::FragTrap(FragTrap &obj) : ClapTrap(obj) {
	*this = obj;
}

FragTrap::~FragTrap() {
	std::cout << "FragTrap " << _name << " destructor called." << std::endl;
}


FragTrap &FragTrap::operator=(const FragTrap &ref) {
	if (this != &ref) {
		_name = ref._name;
		_health_point = ref._health_point;
		_energy = ref._energy;
		_attack_damage = ref._attack_damage;
	}
	return *this;
}

/*
! Methods
*/

void FragTrap::attack(const std::string& target)
{
	if (this->_health_point <= 0)
	{
		std::cout << "you died!" << std::endl;
		return ;
	}
	if (this->_energy <= 0)
	{
		std::cout << "akk!! energy is 0 !!" << std::endl;
		return;
	}
	this->_energy -= 1;
	std::cout << "FragTrap " << this->_name << " attacks " << target << ", causing " << this->_attack_damage << " points of damage!" << std::endl;
};

void FragTrap::highFivesGuys() {
	if (this->_health_point <= 0) {
		std::cout << "FragTrap " << this->_name << " died" << std::endl;
		return ;
	}
	if (this->_energy <= 0)
	{
		std::cout << "FragTrap " << this->_name << "akk!! energy is 0 !!" << std::endl;
		return ;
	}
	std::cout << "FragTrap" << this->_name << " high five~" << std::endl;
}