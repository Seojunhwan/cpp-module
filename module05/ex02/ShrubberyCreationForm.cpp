#include "ShrubberyCreationForm.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm() 
: Form("shrubbery", 145, 137)
{ }

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) 
: Form("shrubbery", 145, 137)
{ this->target = target; }

ShrubberyCreationForm::~ShrubberyCreationForm() { }

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &s)
:Form(s)
{ this->target = s.target; }

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &s) 
{
	this->target = s.target;
	return *dynamic_cast<ShrubberyCreationForm*>(&Form::operator=(s));
}

std::string ShrubberyCreationForm::getTarget() const { return target; }

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const {
	isExecutable(executor);
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
	ofs.open(getTarget() + "_shruberry");
	ofs << shrubbery;
	ofs.close();
}
