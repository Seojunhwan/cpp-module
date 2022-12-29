#ifndef SERIALIZATION_HPP
# define SERIALIZATION_HPP

#include <iostream>

struct	Data {
	std::string	_name;
};

class Serialization
{
	private:
	public:
		Serialization();
		Serialization(const Serialization &obj);
        Serialization& operator=(const Serialization& obj);
		~Serialization();

		uintptr_t serialize(Data* ptr);
		Data* deserialize(uintptr_t raw);
};


#endif


