#include "FragTrap.hpp"

int main(void) {
	FragTrap junseo("junseo");
	FragTrap jiyo("jiyo");

	junseo.highFivesGuys();
	jiyo.attack("junseo");
	junseo.takeDamage(100);
	junseo.highFivesGuys();
	return 0;
}