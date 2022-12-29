#include <iostream>
#include "Conversion.hpp"

int main(int argc, char **argv) {
	if (argc != 2) {
		std::cout << "usage ./a.out [input]" << std::endl;
		return 1;
	}

	std::cout.precision(1);
	std::cout << std::fixed;

	Conversion conversion(argv[1]);
	conversion.putChar();
	conversion.putInt();
	conversion.putFloat();
	conversion.putDouble();
	return 0;
}