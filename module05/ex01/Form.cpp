#include "Form.hpp"
#include <iostream>

Form::Form(void): _name("default"), _isSigned(false), _signGrade(150), _executionGrade(150) {

}

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
/*
TODO: 수정
*/
Form&	Form::operator=(const Form &obj) {
	if (this != &obj) {
		std::cout << "You cannot copy Form!" << std::endl;
	}
	return *this;
}

void				Form::beSigned(Bureaucrat &obj) {
	if (obj.getGrade() > this->getSignGrade()) {
		throw Form::GradeTooLowException();
	}
	this->_isSigned = true;
}

const std::string	Form::getName() const {
	return this->_name;
}

bool				Form::getIsSigned() const {
	return this->_isSigned;
}

int					Form::getSignGrade() const {
	return this->_signGrade;
}

int					Form::getExecutionGrade() const {
	return this->_executionGrade;
}

std::out_of_range	Form::GradeTooHighException() {
	return std::out_of_range("Grade is too high.");
}

std::out_of_range	Form::GradeTooLowException() {
	return std::out_of_range("Grade is too low.");
}

std::ostream& operator<<(std::ostream& os, const Form& obj) {
	os << "Name: " << obj.getName() << std::endl 
	<< "is Signed: " << (obj.getIsSigned() ? "yes" : "no") << std::endl
	<< "possible sign grade: " << obj.getSignGrade() << std::endl
	<< "possible execution grade: " << obj.getExecutionGrade() << std::endl;

	return os;
}