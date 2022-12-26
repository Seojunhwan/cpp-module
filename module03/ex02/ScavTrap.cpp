#include "ScavTrap.hpp"
#include <iostream>

void ScavTrap::guardGate() {
	if (this->_hit_points <= 0) {
		std::cout << "ScavTrap " << this->_name << " died" << std::endl;
		return ;
	}
	if (this->_energy <= 0)
	{
		std::cout << "ScavTrap " << this->_name << "akk!! energy is 0 !!" << std::endl;
		return ;
	}
	std::cout << "ScavTrap" << this->_name << " is now in Gate keeper mode." << std::endl;
}

void ScavTrap::attack(const std::string& target)
{
	if (this->_hit_points <= 0)
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
	std::cout << "ScavTrap " << this->_name << " attacks " << target << ", causing " << this->_attack_damage << " points of damage!" << std::endl;
};

/*
 * Orthodox Canonical Form 
*/

ScavTrap::ScavTrap(): ClapTrap() {
	_hit_points = 100;
	_energy = 50;
	_attack_damage = 20;
	std::cout << "ScavTrap" << _name << " constructor called." << std::endl;
}

ScavTrap::ScavTrap(std::string name): ClapTrap(name) {
	_hit_points = 100;
	_energy = 50;
	_attack_damage = 20;
	std::cout << "ScavTrap " << _name << " constructor called." << std::endl;
}

ScavTrap::ScavTrap(ScavTrap &s): ClapTrap(s) {
	*this = s;
	std::cout << "ScavTrap " << _name << " copy constructor called." << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &s) {
	if (this != &s) {
		_name = s._name;
		_hit_points = s._hit_points;
		_energy = s._energy;
		_attack_damage = s._attack_damage;
	}
	return *this;
}

ScavTrap::~ScavTrap() {
	std::cout << "ScavTrap " << _name << " destructor called." << std::endl;
}