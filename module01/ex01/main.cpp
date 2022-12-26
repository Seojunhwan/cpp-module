/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junseo <junseo@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 01:57:25 by junseo            #+#    #+#             */
/*   Updated: 2022/11/21 02:28:35 by junseo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void) {
  Zombie *zombies = zombieHorde(10, "zombie");

  for (int i = 0; i < 10; i++) {
    zombies[i].announce();
  }

  delete[] zombies;

  return (0);
}
