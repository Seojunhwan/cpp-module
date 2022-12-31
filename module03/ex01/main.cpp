#include "ScavTrap.hpp"
#include <iostream>

int main(void)
{
	{
		ScavTrap junseo("junseo");
		ScavTrap jiyokim("jiyokim");

		std::cout << std::endl;

		jiyokim.attack("junseo");
		junseo.takeDamage(20);
		
		jiyokim.attack("junseo");
		junseo.takeDamage(20);

		jiyokim.attack("junseo");
		junseo.takeDamage(20);

		jiyokim.attack("junseo");
		junseo.takeDamage(20);

		junseo.guardGate();

		std::cout << std::endl;

		jiyokim.attack("junseo");
		junseo.takeDamage(20);
		junseo.guardGate();
	}
	std::cout << std::endl;
	std::cout << std::endl;
	{
		ScavTrap junseo("junseo");
		ClapTrap jiyokim("jiyokim");

		junseo.attack("jiyokim");
		jiyokim.attack("junseo");
		junseo.guardGate();
	}
	
	return (0);
}
