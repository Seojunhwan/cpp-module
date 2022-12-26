#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include <string>
#include "ClapTrap.hpp"

class ScavTrap:public ClapTrap
{
	public:
		ScavTrap(void);
		ScavTrap(std::string name);
		ScavTrap(ScavTrap &obj);
		~ScavTrap();

		ScavTrap &operator=(const ScavTrap &ref);


		void	attack(const std::string& target);
		void	guardGate();
};

#endif