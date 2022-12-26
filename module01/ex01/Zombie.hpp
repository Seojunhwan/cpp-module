/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junseo <junseo@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 01:56:28 by junseo            #+#    #+#             */
/*   Updated: 2022/11/21 02:22:17 by junseo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>

class Zombie {
  private:
    std::string _name;

  public:
    Zombie();
    Zombie(std::string name);
    ~Zombie();

		void SetName(std::string name);
    void announce() const;
};

Zombie* zombieHorde(int N, std::string name);

#endif