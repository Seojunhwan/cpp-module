#include "ShrubberyCreationForm.hpp"
#include "AForm.hpp"
#include <fstream>

/*
 * Orthodox Canonical Form
 */
 
ShrubberyCreationForm::ShrubberyCreationForm(void)
: AForm("ShrubberyCreationForm", 145, 137), _target("default") {

}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) 
: AForm("ShrubberyCreationForm", 145, 137), _target(target) { 

}

ShrubberyCreationForm::~ShrubberyCreationForm() { }

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &obj)
:AForm(obj), _target(obj._target) {}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &obj) {
	if (this != &obj) {
		AForm::operator=(obj);
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
	if (ofs.fail()) {
		throw std::runtime_error("open file failed.");
	}
	ofs << shrubbery;
	ofs.close();
}
