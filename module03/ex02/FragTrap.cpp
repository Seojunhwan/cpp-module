#include "FragTrap.hpp"
#include <iostream>

/*
! Orthodox Canonical Form
*/

FragTrap::FragTrap(void) : ClapTrap() {
	this->_hit_points = 100;
	this->_energy = 100;
	this->_attack_damage = 30;
	std::cout << "FragTrap " << _name << " constructor called." << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name) {
	this->_hit_points = 100;
	this->_energy = 100;
	this->_attack_damage = 30;
	std::cout << "FragTrap " << _name << " constructor called." << std::endl;
}

FragTrap::FragTrap(FragTrap &obj) : ClapTrap(obj) {
	*this = obj;
	std::cout << "FragTrap " << _name << " copy constructor called." << std::endl;
}

FragTrap::~FragTrap() {
	std::cout << "FragTrap " << _name << " destructor called." << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &ref) {
	if (this != &ref) {
		_name = ref._name;
		_hit_points = ref._hit_points;
		_energy = ref._energy;
		_attack_damage = ref._attack_damage;
	}
	return *this;
}

/*
! Member Function
*/

void FragTrap::attack(const std::string& target)
{
	if (this->_hit_points == 0) {
		std::cout << "FragTrap " << this->_name << " died" << std::endl;
		return ;
	}
	if (this->_energy == 0) {
		std::cout << "FragTrap " << "akk!! energy is 0 !!" << std::endl;
		return;
	}
	this->_energy -= 1;
	std::cout << "FragTrap " << this->_name << " attacks " << target << ", causing " << this->_attack_damage << " points of damage!" << std::endl;
};

void FragTrap::highFivesGuys() {
	if (this->_hit_points == 0) {
		std::cout << "FragTrap " << this->_name << " died" << std::endl;
		return ;
	}
	std::cout << "FragTrap " << this->_name << " high five~" << std::endl;
}
