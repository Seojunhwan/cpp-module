#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <string>

class WrongAnimal {
	public:
		WrongAnimal(void);
		WrongAnimal(const WrongAnimal &obj);
		virtual ~WrongAnimal();

		WrongAnimal& operator=(const WrongAnimal& obj);

		
		std::string 	getType() const;
		void	makeSound() const;

	protected:
		std::string _type;
};

#endif
