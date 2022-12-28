#include "Bureaucrat.hpp"
#include "Form.hpp"

Bureaucrat::Bureaucrat()
: name("default"), grade(150) { }

Bureaucrat::Bureaucrat(const std::string name, int grade)
: name(name), grade(grade) {
	if (grade < G_HIGH)
		throw GradeTooHighException();
	else if (grade > G_LOW)
		throw GradeTooLowException();
}

Bureaucrat::~Bureaucrat() { }

Bureaucrat::Bureaucrat(const Bureaucrat &brct) {
	*this = brct;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &brct) {
	if (this != &brct)
	{
		*(const_cast<std::string*>(&name)) = brct.getName();
		this->grade = brct.getGrade();
	}
	return *this;
}

std::string Bureaucrat::getName() const { return name; }

int Bureaucrat::getGrade() const { return grade; }

void Bureaucrat::incrementGrade() {
	if (grade - 1 < G_HIGH)
		throw GradeTooHighException();
	--grade;
}

void Bureaucrat::decrementGrade() {
	if (grade + 1 > G_LOW)
		throw GradeTooLowException();
	++grade;
}

void Bureaucrat::signForm(Form &form) {
	try {
		form.beSigned(*this);
		std::cout << getName() << " signed " << form.getName() << std::endl;
	} catch (std::exception &e) {
		std::cout << getName() << " couldn't sign "
		<< form.getName() << " because " << e.what() << std::endl;
	}
}

const char *Bureaucrat::GradeTooHighException::what() const throw(){
	return "Grade too high.";
}

const char *Bureaucrat::GradeTooLowException::what() const throw(){
	return "Grade too low.";
}

std::ostream& operator<<(std::ostream& ostream, const Bureaucrat& brct) {
	return ostream << "<" << brct.getName()
	<< ">, bureaucrat grade <" 
	<< brct.getGrade() << ">" << std::endl;
}
