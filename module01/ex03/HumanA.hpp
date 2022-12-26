/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junseo <junseo@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 02:52:54 by junseo            #+#    #+#             */
/*   Updated: 2022/11/21 02:56:41 by junseo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include <string>
# include "Weapon.hpp"

class HumanA {
  private:
    std::string _name;
    Weapon& _weapon;

  public:
    HumanA(std::string name, Weapon& weapon);
    ~HumanA();

    void attack() const;
};

#endif