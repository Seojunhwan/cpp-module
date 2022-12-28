#include "ShrubberyCreationForm.hpp"
#include "AForm.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) 
: AForm("shrubbery", 145, 137) { 
	this->_target = target;
}

ShrubberyCreationForm::~ShrubberyCreationForm() { }

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &obj)
:AForm(obj) {
	*this = obj;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &obj) {
	if (this != &obj) {
		AForm::operator=(obj);
		this->_target = obj._target;
	}
	return *this;
}

std::string ShrubberyCreationForm::getTarget() const { 
	return this->_target;
}

void ShrubberyCreationForm::execute(Bureaucrat const & obj) const {
	if (!this->getIsSigned()) {
		throw AForm::IsNotSignedException();
	}
	if (this->getExecutionGrade() < obj.getGrade()) {
		throw AForm::GradeTooLowException();
	}
	std::string shrubbery = "      .\n"
													"   __/ \\__ \n"
													"   \\     / \n"
													"   /.'o'.\\ \n"
													"    .o.'. \n"
													"   .'.'o'. \n"
													"  o'.o.'.o. \n"
													" .'.o.'.'.o. \n"
													".o.'.o.'.o.'. \n"
													"   [_____] \n"
													"    \\___/  \n";
	std::ofstream ofs;
	ofs.open((this->getTarget() + "_shruberry").c_str());
	ofs << shrubbery;
	ofs.close();
}
