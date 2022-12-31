#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap junseo("junseo");
	ClapTrap jiyo("jiyo");

	junseo.attack("jiyo");
	jiyo.takeDamage(15);
	jiyo.attack("junseo");

	return (0);
}
