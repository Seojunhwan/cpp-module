#ifndef AANIMAL_HPP
# define AANIMAL_HPP

# include <string>

class AAnimal {
	public:
		AAnimal(void);
		AAnimal(const AAnimal &obj);
		virtual ~AAnimal();

		AAnimal& operator=(const AAnimal& obj);

		
		std::string 	getType() const;
		virtual void	makeSound() const = 0;

	protected:
		std::string _type;
};

#endif
