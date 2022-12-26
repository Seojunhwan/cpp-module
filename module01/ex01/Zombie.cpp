/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junseo <junseo@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 01:54:59 by junseo            #+#    #+#             */
/*   Updated: 2022/11/21 02:29:50 by junseo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

Zombie::Zombie() {
  _name = "junseo";
}

Zombie::Zombie(std::string name) {
  _name = name;
}

Zombie::~Zombie() {
  std::cout << "Zombie " << _name << " is dead." << std::endl;
}

void Zombie::SetName(std::string name) {
  _name = name;
}

void Zombie::announce() const {
  std::cout << _name << " BraiiiiiiinnnzzzZ..." << std::endl;
}