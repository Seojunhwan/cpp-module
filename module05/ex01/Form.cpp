#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form()
: name("default"), sign(false), 
sign_grade(1), exe_grade(1) 
{ }

Form::Form(const Form &form)
: name(form.getName()), sign(false), 
sign_grade(form.getSignGrade()), exe_grade(form.getExeGrade())
{ }

Form &Form::operator=(const Form &form)
{
	*const_cast<std::string*>(&name) = form.getName();
	sign = form.getSign();
	*const_cast<int*>(&sign_grade) = form.getSignGrade();
	*const_cast<int*>(&exe_grade) = form.getExeGrade();
	return *this;
}

Form::Form(const std::string name, int sign_grade, int exe_grade)
:name(name), sign(false),
sign_grade(sign_grade), exe_grade(exe_grade) 
{
	if (sign_grade < G_HIGH || exe_grade < G_HIGH)
		throw GradeTooHighException();
	else if (sign_grade > G_LOW || exe_grade > G_LOW)
		throw GradeTooLowException();
}

Form::~Form() {}

std::string Form::getName() const { return name; }

bool Form::getSign() const { return sign; }

int Form::getSignGrade() const { return sign_grade; }

int Form::getExeGrade() const { return exe_grade; }

void Form::beSigned(const Bureaucrat &brct) {
	if (brct.getGrade() <= sign_grade)
		sign = true;
	else
		throw GradeTooLowException();
}

const char * Form::GradeTooHighException::what() const throw(){
	return "Grade too high.";
}

const char * Form::GradeTooLowException::what() const throw() {
	return "Grade too low.";
}

std::ostream& operator<<(std::ostream& ostream, const Form& form) {
	return (ostream << "<" << form.getName()
					<< ">, sign_grade <" << form.getSignGrade()
					<< ">, exe_grade <" << form.getExeGrade()
					<< ">, signed <" << (form.getSign() ? "true>" : "false>")
					<< std::endl);
}
