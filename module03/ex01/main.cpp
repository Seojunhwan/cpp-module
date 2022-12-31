#include "ScavTrap.hpp"

int main(void)
{
	ScavTrap junseo("junseo");
	ClapTrap jiyokim("jiyokim");

	junseo.attack("jiyokim");
	jiyokim.takeDamage(5);
	
	return (0);
}
