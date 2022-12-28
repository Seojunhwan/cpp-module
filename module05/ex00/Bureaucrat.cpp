#include "Bureaucrat.hpp"
#include <iostream>

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name) {
    if (grade < 1) {
        throw Bureaucrat::GradeTooHighException();
    } else if (grade > 150)
        throw Bureaucrat::GradeTooLowException();
    else
        this->_grade = grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat &obj) : _name(obj._name) {
    *this = obj;
}

Bureaucrat::~Bureaucrat() {    
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& obj) {
    if (this != &obj) {
        this->_grade = obj._grade;
    }
    return *this;
}

const std::string   Bureaucrat::getName() const {
    return this->_name;
}

int                 Bureaucrat::getGrade() const {
    return this->_grade;
}

void                Bureaucrat::incrementGrade() {
    if (this->_grade == 1) {
        throw GradeTooHighException();
    }
    this->_grade--;
}

void                Bureaucrat::decrementGrade() {
    if (this->_grade == 150) {
        throw GradeTooLowException();
    }
    this->_grade++;
}

std::out_of_range Bureaucrat::GradeTooHighException() const {
    return std::out_of_range("Grade is too high!");
}

std::out_of_range Bureaucrat::GradeTooLowException() const {
    return std::out_of_range("Grade is too low!");
}

std::ostream& operator<<(std::ostream& os, Bureaucrat const& obj) {
    os << obj.getName() << ", bureaucrat grade " << obj.getGrade() << "." << std::endl;
    return os;
}