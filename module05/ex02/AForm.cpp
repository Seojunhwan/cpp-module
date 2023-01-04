#include "AForm.hpp"
#include <iostream>

AForm::AForm(void): _name("default"), _isSigned(false), _signGrade(150), _executionGrade(150) {

}

AForm::AForm(const std::string& name,const int signGrade, const int executionGrade) 
:_name(name), 
_isSigned(false),
_signGrade(signGrade),
_executionGrade(executionGrade) {
	if (signGrade < 1 || executionGrade < 1)
		throw AForm::GradeTooHighException();
	if (signGrade > 150 || executionGrade > 150)
		throw AForm::GradeTooLowException();
}

AForm::AForm(const AForm &obj)
:_name(obj._name), 
_isSigned(obj._isSigned),
_signGrade(obj._signGrade), 
_executionGrade(obj._executionGrade) {

}


AForm::~AForm() { 
}
AForm&	AForm::operator=(const AForm &obj) {
	if (this != &obj) {
		std::cout << "You cannot copy Form!" << std::endl;
	}
	return *this;
}

void				AForm::beSigned(Bureaucrat &obj) {
	if (obj.getGrade() > this->getSignGrade()) {
		throw AForm::GradeTooLowException();
	}
	this->_isSigned = true;
}

const std::string	AForm::getName() const {
	return this->_name;
}

bool				AForm::getIsSigned() const {
	return this->_isSigned;
}

int					AForm::getSignGrade() const {
	return this->_signGrade;
}

int					AForm::getExecutionGrade() const {
	return this->_executionGrade;
}

std::out_of_range	AForm::GradeTooHighException() {
	std::string e = "Grade is too high!";
    return std::out_of_range(e);
}

std::out_of_range	AForm::GradeTooLowException() const {
	std::string e = "Grade is too low!";
    return std::out_of_range(e);
}

std::logic_error	AForm::IsNotSignedException() const {
	std::string e = "Form is not signed.";
	return std::logic_error(e);
}

std::ostream& operator<<(std::ostream& os, const AForm& obj) {
	os << "Name: " << obj.getName() << std::endl 
	<< "is Signed: " << (obj.getIsSigned() ? "yes" : "no") << std::endl
	<< "possible sign grade: " << obj.getSignGrade() << std::endl
	<< "possible execution grade: " << obj.getExecutionGrade() << std::endl;

	return os;
}