#ifndef CAT_HPP
# define CAT_HPP

# include <string>
# include "AAnimal.hpp"
# include "Brain.hpp"

class Cat : public AAnimal {
	public:
		Cat(void);
		Cat(const Cat &obj);
		~Cat();
		Cat& operator=(const Cat& obj);

		void	makeSound() const;

	private:
		Brain*	_brain;
};

#endif
