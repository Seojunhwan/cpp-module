#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <string>

class ClapTrap
{
	public:
		ClapTrap(void);
		ClapTrap(const std::string name);
		ClapTrap(const ClapTrap &obj);
		~ClapTrap();

		ClapTrap &operator=(const ClapTrap &ref);

		void attack(const std::string &target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);

	protected:
		std::string _name;
		unsigned int _hit_points;
		unsigned int _energy;
		unsigned int _attack_damage;
};

#endif
