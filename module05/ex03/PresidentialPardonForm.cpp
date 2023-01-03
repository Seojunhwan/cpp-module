#include "PresidentialPardonForm.hpp"
#include <iostream>

PresidentialPardonForm::PresidentialPardonForm(void)
:AForm("PresidentialPardonForm", 25, 5), _target("default") {
	
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) 
: AForm("PresidentialPardonForm", 25, 5), _target(target) { 
	
}

PresidentialPardonForm::~PresidentialPardonForm() { }

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &obj)
:AForm(obj), _target(obj._target) {}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &obj) {
	if (this != &obj) {
		AForm::operator=(obj);
	}
	return *this;
}

std::string PresidentialPardonForm::getTarget() const { 
	return this->_target;
}

void PresidentialPardonForm::execute(Bureaucrat const & obj) const {
	if (!this->getIsSigned()) {
		throw AForm::IsNotSignedException();
	}
	if (this->getExecutionGrade() < obj.getGrade()) {
		throw AForm::GradeTooLowException();
	}
	std::cout << this->getTarget() << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}