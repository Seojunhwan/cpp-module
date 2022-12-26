/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junseo <junseo@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 13:08:19 by junseo            #+#    #+#             */
/*   Updated: 2022/12/26 15:33:42 by junseo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>

ClapTrap::ClapTrap(void) : _name("Default ClapTrap"), _health_point(10), _energy(10), _attack_damage(0)
{
	std::cout << "ClapTrap " << _name << " created!" << std::endl;
};

ClapTrap::ClapTrap(std::string name) : _name(name), _health_point(10), _energy(10), _attack_damage(0)
{
	std::cout << "ClapTrap " << _name << " created!" << std::endl;
};

ClapTrap::ClapTrap(const ClapTrap &ref)
{
	*this = ref;
};

ClapTrap::~ClapTrap()
{
	std::cout << this->_name << "Destructor called" << std::endl;
};

ClapTrap &ClapTrap::operator=(const ClapTrap& obj)
{
	this->_name = obj._name;
	this->_health_point = obj._health_point;
	this->_attack_damage = obj._attack_damage;
	this->_energy = obj._energy;
	return *this;
}

void ClapTrap::attack(const std::string& target)
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
	std::cout << "ClapTrap " << this->_name << " attacks " << target << ", causing " << this->_attack_damage << " points of damage!" << std::endl;
};

void ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_health_point <= 0)
	{
		std::cout << "you died!" << std::endl;
		return ;
	}
	if (this->_health_point > amount)
	{
		// 공격 받았다 !
		this->_health_point -= amount;
	} else {
		//  죽었다 !
		this->_health_point = 0;
	}
};

void ClapTrap::beRepaired(unsigned int amount)
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
	this->_health_point += amount;
};