#ifndef CAT_HPP
# define CAT_HPP

# include <string>
# include "Animal.hpp"

class Cat : public Animal {
	public:
		Cat(void);
		Cat(const Cat &obj);
		~Cat();

		Cat& operator=(const Cat& obj);

		void	makeSound() const;
};

#endif