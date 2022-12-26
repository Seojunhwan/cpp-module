/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junseo <junseo@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 02:53:15 by junseo            #+#    #+#             */
/*   Updated: 2022/11/21 02:55:07 by junseo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <string>

class Weapon {
  private:
    std::string _type;

  public:
    Weapon(std::string type);
    ~Weapon();

    const std::string& getType() const;
    void setType(std::string type);
};

#endif