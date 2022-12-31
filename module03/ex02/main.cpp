#include "FragTrap.hpp"
#include <iostream>

int main(void)
{
	{
		FragTrap junseo("junseo");
		FragTrap jiyokim("jiyokim");

		std::cout << std::endl;

		jiyokim.attack("junseo");
		junseo.takeDamage(30);
		
		jiyokim.attack("junseo");
		junseo.takeDamage(30);

		jiyokim.attack("junseo");
		junseo.takeDamage(30);

		junseo.highFivesGuys();

		std::cout << std::endl;

		jiyokim.attack("junseo");
		junseo.takeDamage(30);
		junseo.highFivesGuys();
	}
	std::cout << std::endl;
	std::cout << std::endl;
	{
		FragTrap junseo("junseo");
		ClapTrap jiyokim("jiyokim");

		junseo.attack("jiyokim");
		jiyokim.attack("junseo");
		junseo.highFivesGuys();
	}
	
	return (0);
}
