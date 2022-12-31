#include "ClapTrap.hpp"
#include <iostream>

ClapTrap::ClapTrap(void) : _name("Default ClapTrap"), _hit_points(10), _energy(10), _attack_damage(0)
{
	std::cout << "ClapTrap " << _name << " created!" << std::endl;
};

ClapTrap::ClapTrap(std::string name) : _name(name), _hit_points(10), _energy(10), _attack_damage(0)
{
	std::cout << "ClapTrap " << _name << " created!" << std::endl;
};

ClapTrap::ClapTrap(const ClapTrap &ref)
{
	*this = ref;
	std::cout << "ClapTrap " << _name << " copy constructor called." << std::endl;
};

ClapTrap::~ClapTrap()
{
	std::cout << this->_name << " Destructor called" << std::endl;
};

ClapTrap &ClapTrap::operator=(const ClapTrap& obj)
{
	this->_name = obj._name;
	this->_hit_points = obj._hit_points;
	this->_attack_damage = obj._attack_damage;
	this->_energy = obj._energy;
	return *this;
}

void ClapTrap::attack(const std::string& target)
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
	std::cout << "ClapTrap " << this->_name << " attacks " << target << ", causing " << this->_attack_damage << " points of damage!" << std::endl;
};

void ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_hit_points <= 0)
	{
		std::cout << "you died!" << std::endl;
		return ;
	}
	if (this->_hit_points > amount)
	{
		std::cout << "take damage " << amount << "!!" << std::endl;
		this->_hit_points -= amount;
	} else {
		std::cout << "you died!" << std::endl;
		this->_hit_points = 0;
	}
};

void ClapTrap::beRepaired(unsigned int amount)
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
	this->_hit_points += amount;
};
