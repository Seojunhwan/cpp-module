#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap {
	public:
		FragTrap(void);
		FragTrap(std::string name);
		FragTrap(FragTrap &obj);
		~FragTrap();

		FragTrap &operator=(const FragTrap &ref);


		void	attack(const std::string& target);
		void	highFivesGuys(void);
};

#endif