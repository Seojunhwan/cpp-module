#include "AAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include <iostream>

int main()
{
	AAnimal *animals[4] = {new Dog(), new Dog(), new Cat(), new Cat()};

	for (int i = 0; i < 4; i++) {
		std::cout << animals[i]->getType() << std::endl;
	}
	for (int i = 0; i < 4; i++)
		delete animals[i];
	return 0;
}
