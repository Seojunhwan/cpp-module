#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

# include <string>
# include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal {
	public:
		WrongCat(void);
		WrongCat(const WrongCat &obj);
		~WrongCat();

		WrongCat& operator=(const WrongCat& obj);

		void	makeSound() const;
};

#endif
