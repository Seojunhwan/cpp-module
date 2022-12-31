#include "ScavTrap.hpp"
#include <iostream>

/*
	! Orthodox Canonical Form 
*/

ScavTrap::ScavTrap(): ClapTrap() {
	this->_hit_points = 100;
	this->_energy = 50;
	this->_attack_damage = 20;
	std::cout << "ScavTrap " << this->_name << " constructor called." << std::endl;
}

ScavTrap::ScavTrap(std::string name): ClapTrap(name) {
	this->_hit_points = 100;
	this->_energy = 50;
	this->_attack_damage = 20;
	std::cout << "ScavTrap " << this->_name << " constructor called." << std::endl;
}

ScavTrap::ScavTrap(ScavTrap &s): ClapTrap(s) {
	*this = s;
	std::cout << "ScavTrap " << this->_name << " copy constructor called." << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &s) {
	if (this != &s) {
		this->_name = s._name;
		this->_hit_points = s._hit_points;
		this->_energy = s._energy;
		this->_attack_damage = s._attack_damage;
	}
	return *this;
}

ScavTrap::~ScavTrap() {
	std::cout << "ScavTrap " << this->_name << " destructor called." << std::endl;
}

/*
	! Member Functions
*/

void ScavTrap::guardGate() {
	if (this->_hit_points == 0) {
		std::cout << "ScavTrap " << this->_name << " died" << std::endl;
		return ;
	}
	std::cout << "ScavTrap " << this->_name << " is now in Gate keeper mode." << std::endl;
}

void ScavTrap::attack(const std::string& target)
{
	if (this->_hit_points == 0) {
		std::cout << "ScavTrap " << this->_name << " died" << std::endl;
		return ;
	}
	if (this->_energy == 0) {
		std::cout << "ScavTrap " << "akk!! energy is 0 !!" << std::endl;
		return;
	}
	this->_energy -= 1;
	std::cout << "ScavTrap " << this->_name << " attacks " << target << ", causing " << this->_attack_damage << " points of damage!" << std::endl;
};
