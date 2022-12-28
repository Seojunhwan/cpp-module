#include "Form.hpp"

Form::Form(const std::string& name,const int signGrade, const int executionGrade) 
:_name(name), 
_isSigned(false),
_signGrade(signGrade),
_executionGrade(executionGrade) {
	if (signGrade < 1 || executionGrade < 1)
		throw Form::GradeTooHighException();
	if (signGrade > 150 || executionGrade > 150)
		throw Form::GradeTooLowException();
}
Form::Form(const Form &obj)
:_name(obj._name), 
_isSigned(obj._isSigned),
_signGrade(obj._signGrade), 
_executionGrade(obj._executionGrade) {

}

Form::~Form() { 
}

Form&	Form::operator=(const Form &obj) {
	if (this != &obj) {
		
	}
	return *this;
}

void				Form::beSigned(Bureaucrat &obj) {

}

std::out_of_range	Form::GradeTooHighException() {

}
std::out_of_range	Form::GradeTooLowException() {

}