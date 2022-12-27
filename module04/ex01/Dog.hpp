#ifndef DOG_HPP
# define DOG_HPP

# include <string>
# include "Animal.hpp"
# include "Brain.hpp"

class Dog : public Animal {
	public:
		Dog(void);
		Dog(const Dog &obj);
		~Dog();

		Dog& operator=(const Dog& obj);

		void	makeSound() const;
	private:
		Brain *_brain;
};

#endif
