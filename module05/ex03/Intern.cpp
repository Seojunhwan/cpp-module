#include "Intern.hpp"
#include <iostream>

Intern::Intern(void) {

}

Intern::Intern(const Intern &obj) {
	*this = obj;
}

Intern::~Intern() {

}

Intern& Intern::operator=(const Intern& obj) {
	if (this != &obj) {
		;
	}
	return *this;
}

AForm	*Intern::makeForm(const std::string &formName, const std::string &targetName) {
	const	std::string nameTable[3] = {"robotomy request", "presidential pardon", "shrubbery creation"};
	int		i;
	AForm	*f;

	for (int j = 0; j < 3; j++)
	{
		if (formName == nameTable[j])
			i = j;
	}
	
	switch (i)
	{
		case 0:
			f = new RobotomyRequestForm(targetName);
			break;
		case 1:
			f = new PresidentialPardonForm(targetName);
			break;
		case 2:
			f = new ShrubberyCreationForm(targetName);
			break;
		default:
			throw Intern::UnknownFormTypeException();
	}
	std::cout << "Intern creates " << formName << std::endl;
	return f;
}

std::invalid_argument Intern::UnknownFormTypeException() const {
	return std::invalid_argument("Invalid Form Type.");
}