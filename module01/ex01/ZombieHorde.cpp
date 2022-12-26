/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junseo <junseo@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 02:19:12 by junseo            #+#    #+#             */
/*   Updated: 2022/11/21 02:30:06 by junseo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name){
  Zombie* zombieHorde = new Zombie[N];

  for (int i = 0; i < N; i++){
    zombieHorde[i].SetName(name);
  }

  return (zombieHorde);
}