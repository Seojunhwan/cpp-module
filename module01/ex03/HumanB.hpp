/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junseo <junseo@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 02:53:07 by junseo            #+#    #+#             */
/*   Updated: 2022/11/21 04:19:59 by junseo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include <string>
# include "Weapon.hpp"

class HumanB {
  private:
    std::string _name;
    Weapon* _weapon;

  public:
    HumanB(std::string name);
    ~HumanB();

    void attack() const;
    void setWeapon(Weapon& weapon);
};

#endif
