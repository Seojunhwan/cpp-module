#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"

int main(void) {
	try {
		ShrubberyCreationForm shruberryForm("home");
		Bureaucrat jiyo("jiyo", 1);
		Bureaucrat b("b", 150);
		jiyo.signForm(shruberryForm);
		shruberryForm.execute(jiyo);
		std::cout << shruberryForm;
	} catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
	} //shruberryCreation

	try{
		ShrubberyCreationForm shruberryForm("home");
		ShrubberyCreationForm a;
		a = shruberryForm;
		std::cout << a.getTarget();

	} catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
	}

	return 0;
}
