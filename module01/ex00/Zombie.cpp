/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junseo <junseo@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 01:54:59 by junseo            #+#    #+#             */
/*   Updated: 2022/11/21 02:10:19 by junseo           ###   ########.fr       */
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

void Zombie::announce() const {
  std::cout << _name << " BraiiiiiiinnnzzzZ..." << std::endl;
}