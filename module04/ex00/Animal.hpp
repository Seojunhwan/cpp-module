#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <string>

class Animal {
	public:
		Animal(void);
		Animal(const Animal &obj);
		virtual ~Animal();
		Animal& operator=(const Animal& obj);

		std::string 	getType() const;
		virtual void	makeSound() const;

	protected:
		std::string _type;
};

#endif