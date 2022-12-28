#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <string>

class Brain {
	public:
		Brain(void);
		Brain(const Brain &obj);
		~Brain();

		Brain& operator=(const Brain& obj);
	private:
		std::string     _ideas[100];
};

#endif
