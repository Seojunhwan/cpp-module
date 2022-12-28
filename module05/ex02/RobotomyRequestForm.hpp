#ifndef ROBOTOMY_REQUEST_FORM_HPP
# define ROBOTOMY_REQUEST_FORM_HPP

# include "Form.hpp"
# include "Bureaucrat.hpp"
# include <string>

class RobotomyRequestForm: public Form {
	private:
		std::string target;
	public:
		RobotomyRequestForm();
    RobotomyRequestForm(std::string target);
    ~RobotomyRequestForm();
    RobotomyRequestForm(const RobotomyRequestForm &r);
    RobotomyRequestForm &operator=(const RobotomyRequestForm &r);

		std::string getTarget() const;
		void execute(Bureaucrat const & executor) const;
};

#endif
