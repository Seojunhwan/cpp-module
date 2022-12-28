#ifndef AFORM_HPP
# define AFORM_HPP

# include <string>
# include <exception>
# include "Bureaucrat.hpp"

class Bureaucrat;

class AForm 
{
	private:
		const std::string	_name;
		bool				_isSigned;
		const int			_signGrade;
		const int			_executionGrade;
	public:
		AForm(const std::string& name, int gradeToSign, int gradeToExec);
		AForm(const AForm &obj);
		virtual ~AForm();
		AForm&	operator=(const AForm &obj);

		void			beSigned(Bureaucrat &obj);
		virtual	void	execute(Bureaucrat const & executor) const = 0;

		const std::string	getName() const;
		bool				getIsSigned() const;
		int					getSignGrade() const;
		int					getExecutionGrade() const;

		std::out_of_range	GradeTooHighException();
		std::out_of_range	GradeTooLowException() const;
		std::logic_error	IsNotSignedException() const;
};

std::ostream& operator<<(std::ostream& os, const AForm& obj);

#endif
