/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junseo <junseo@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 02:52:58 by junseo            #+#    #+#             */
/*   Updated: 2022/11/21 04:19:57 by junseo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include <iostream>

HumanB::HumanB(std::string name) : _weapon(NULL)
{
  _name = name;
}

HumanB::~HumanB()
{
}

void HumanB::attack() const
{
  if (!_weapon)
    std::cout << _name << " has no weapon" << std::endl;
  std::cout << _name << " attacks with his " << _weapon->getType() << std::endl;
}

void HumanB::setWeapon(Weapon& weapon)
{
  _weapon = &weapon;
}