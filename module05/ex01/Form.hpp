#ifndef FORM_HPP
# define FORM_HPP

# include <string>
# include <exception>
# include "Bureaucrat.hpp"
class Form {
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
		
		std::out_of_range	GradeTooHighException();
		std::out_of_range	GradeTooLowException();
};

std::ostream& operator<<(std::ostream& ostream, const Form& form);

#endif
