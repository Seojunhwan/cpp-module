#ifndef PRESIDENTIAL_PARDON_FORM
# define PRESIDENTIAL_PARDON_FORM

# include <string>
# include "AForm.hpp"
class PresidentialPardonForm : public AForm
{
	private:
		std::string	_target;
	public:
		PresidentialPardonForm(std::string target);
		~PresidentialPardonForm();
		PresidentialPardonForm(const PresidentialPardonForm &s);
		PresidentialPardonForm &operator=(const PresidentialPardonForm &s);

		std::string getTarget() const;
		void execute(Bureaucrat const & executor) const;
};

#endif
