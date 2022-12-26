/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junseo <junseo@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 01:57:25 by junseo            #+#    #+#             */
/*   Updated: 2022/11/21 02:13:24 by junseo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void) {
  Zombie zombieWithoutName = Zombie();
  zombieWithoutName.announce();

  Zombie zombieWithName = Zombie("gamja");
  zombieWithName.announce();

  randomChump("randomChump");

  Zombie* newZombie1 = newZombie("newZombie");
  newZombie1->announce();
  delete newZombie1;

  return (0);
}
