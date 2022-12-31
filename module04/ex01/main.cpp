#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include <iostream>

int main()
{
	{
		Animal *animals[4] = {new Dog(), new Dog(), new Cat(), new Cat()};

		for (int i = 0; i < 4; i++) {
			std::cout << animals[i]->getType() << std::endl;
		}
		for (int i = 0; i < 4; i++)
			delete animals[i];
	}
	std::cout << std::endl;
	{
		Dog  *dog1 = new Dog();
		Dog dog2 = *dog1;
		delete dog1;
	}
	return 0;
}
