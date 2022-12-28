#ifndef SHRUBBERY_CREATION_FORM_HPP
# define SHRUBBERY_CREATION_FORM_HPP

# include "AForm.hpp"
# include <string>

class ShrubberyCreationForm : public AForm {
	private:
		std::string _target;
	public:
		ShrubberyCreationForm(std::string target);
		~ShrubberyCreationForm();
		ShrubberyCreationForm(const ShrubberyCreationForm &s);
		ShrubberyCreationForm &operator=(const ShrubberyCreationForm &s);

		std::string getTarget() const;
		void execute(Bureaucrat const & executor) const;
};

#endif
