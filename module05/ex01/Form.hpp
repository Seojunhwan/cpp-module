#ifndef FORM_HPP
# define FORM_HPP

# include <string>
# include <exception>
# include "Bureaucrat.hpp"

class Bureaucrat;

class Form 
{
	private:
		const std::string	_name;
		bool				_isSigned;
		const int			_signGrade;
		const int			_executionGrade;
	public:
		Form(const std::string& name, int gradeToSign, int gradeToExec);
		Form(const Form &obj);
		~Form();
		Form&	operator=(const Form &obj);

		void				beSigned(Bureaucrat &obj);
		const std::string	getName() const;
		bool				getIsSigned() const;
		int					getSignGrade() const;
		int					getExecutionGrade() const;

		std::out_of_range	GradeTooHighException();
		std::out_of_range	GradeTooLowException();
};

std::ostream& operator<<(std::ostream& os, const Form& obj);

#endif
