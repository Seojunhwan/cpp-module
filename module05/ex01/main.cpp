#include "Bureaucrat.hpp"
#include "Form.hpp"

int main(void) {
	try {
		Form a("formA", 20, 20);
		Bureaucrat jiyo("jiyo", 21);
		std::cout << a;
		a.beSigned(jiyo);
		// jiyo.signForm(a);
		std::cout << a;
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	return 0;
}
