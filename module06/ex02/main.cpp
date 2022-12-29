#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <iostream>

Base * generate(void) {
	int type;
	Base* ret;

	std::srand(std::time(NULL));
	type = rand() % 3;
	if (type == 0) {
		ret = new A();
	} else if (type == 1) {
		ret = new B();
	} else {
		ret = new C();
	}
	return (ret);
}

void identify(Base* p) {
	if (dynamic_cast<A*>(p)) {
		std::cout << "A" << std::endl;
	} else if (dynamic_cast<B*>(p)) {
		std::cout << "B" << std::endl;
	} else if (dynamic_cast<C*>(p)) {
		std::cout << "C" << std::endl;
	}
}

void identify(Base& p) {
	try
	{
		A& a = dynamic_cast<A&>(p);
		(void) a;
		std::cout << "A" << std::endl;
	} catch(const std::exception& e) {

	}
	try
	{
		B& b = dynamic_cast<B&>(p);
		(void) b;
		std::cout << "B" << std::endl;
	} catch(const std::exception& e) {
		
	}
	try
	{
		C& c = dynamic_cast<C&>(p);
		(void) c;
		std::cout << "C" << std::endl;
	} catch(const std::exception& e) {
		
	}
}

int main(void) {
	Base *b1 = generate();

	identify(b1);
	identify(*b1);
	return 0;
}