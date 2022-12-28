#include "RobotomyRequestForm.hpp"
#include <cstdlib>

RobotomyRequestForm::RobotomyRequestForm()
: Form("robotomy", 72, 45) { }

RobotomyRequestForm::RobotomyRequestForm(std::string target) 
: Form("robotomy", 72, 45) 
{	this->target = target; }

RobotomyRequestForm::~RobotomyRequestForm() {}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &r)
: Form(r) 
{ this->target = r.target; }

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &r) 
{
	this->target = r.target;
	return *dynamic_cast<RobotomyRequestForm*>(&Form::operator=(r));
}

std::string RobotomyRequestForm::getTarget() const { return target; }

void RobotomyRequestForm::execute(Bureaucrat const & executor) const {
	isExecutable(executor);
	int r = rand() % 2;
	if (r) {
		std::cout << "drilllllllllllllll~!!" << std::endl;
		std::cout << getTarget() << " has been robotomized successfully 50%% of the time." << std::endl;
	} else {
		std::cout << "d...r....r.." << std::endl;
		std::cout << getTarget() << " robotomy failed..";
	}
}
