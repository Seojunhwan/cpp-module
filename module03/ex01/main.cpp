/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junseo <junseo@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/26 15:24:41 by junseo            #+#    #+#             */
/*   Updated: 2022/12/26 15:52:56 by junseo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main(void)
{
	ScavTrap junseo("junseo");
	ClapTrap jiyokim("jiyokim");

	junseo.attack("jiyokim");
	jiyokim.takeDamage(5);
	
	return (0);
}