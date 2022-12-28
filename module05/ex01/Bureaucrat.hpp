#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <exception>
# include <string>
# include <iostream>

# define G_HIGH 1
# define G_LOW 150

class Form;

class Bureaucrat {
	private:
		const std::string name;
		int grade;
	public:
		Bureaucrat();
		Bureaucrat(const std::string name, int grade);
		~Bureaucrat();
		Bureaucrat(const Bureaucrat &brct);
		Bureaucrat &operator=(const Bureaucrat &brct);

		std::string getName() const;
		int getGrade() const;

		void incrementGrade();
		void decrementGrade();

		void signForm(Form& form);

		class GradeTooHighException: public std::exception {
			public:
				const char * what() const throw();
		};
		class GradeTooLowException: public std::exception {
			public:
				const char * what() const throw();
		};
};

std::ostream& operator<<(std::ostream& ostream, const Bureaucrat& brct);

#endif
