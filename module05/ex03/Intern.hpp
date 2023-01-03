#ifndef INTERN_HPP
# define INTERN_HPP

# include <string>
# include "AForm.hpp"
# include <exception>
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"
# include "ShrubberyCreationForm.hpp"

class Intern
{
	private:
		
	public:
		Intern();
		Intern(const Intern &obj);
		~Intern();

		Intern& operator=(const Intern& obj);

		AForm	*makeForm(const std::string &formName, const std::string &targetName);

		std::invalid_argument UnknownFormTypeException() const;
};

#endif