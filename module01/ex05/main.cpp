/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junseo <junseo@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 16:40:14 by junseo            #+#    #+#             */
/*   Updated: 2022/11/21 17:43:23 by junseo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>

int main(void)
{
  Harl harl;

  harl.complain("DEBUG");
  std::cout << std::endl;
  harl.complain("INFO");
  std::cout << std::endl;
  harl.complain("WARNING");
  std::cout << std::endl;
  harl.complain("ERROR");
  return (0);
}