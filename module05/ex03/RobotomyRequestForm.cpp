#include "RobotomyRequestForm.hpp"
#include <cstdlib>
#include <iostream>

RobotomyRequestForm::RobotomyRequestForm(void) 
: AForm("RobotomyRequestForm", 72, 45), _target("default") {

}

RobotomyRequestForm::RobotomyRequestForm(std::string target) 
: AForm("RobotomyRequestForm", 72, 45), _target(target) {

}

RobotomyRequestForm::~RobotomyRequestForm() {}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &obj)
:AForm(obj), _target(obj._target) {}


RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &obj) 
{
	if (this != &obj) {
		AForm::operator=(obj);
	}
	return *this;
}

std::string RobotomyRequestForm::getTarget() const { 
	return this->_target; 
}

void RobotomyRequestForm::execute(Bureaucrat const & obj) const {
	if (!this->getIsSigned()) {
		throw AForm::IsNotSignedException();
	}
	if (this->getExecutionGrade() < obj.getGrade()) {
		throw AForm::GradeTooLowException();
	}
	srand(time(NULL));
	if (rand() % 2) {
		std::cout << "drilllllllllllllll~!!" << std::endl;
		std::cout << getTarget() << " has been robotomized successfully 50\% of the time." << std::endl;
	} else {
		std::cout << "d...r....r.." << std::endl;
		std::cout << getTarget() << " robotomy failed.." << std::endl;
	}
}
