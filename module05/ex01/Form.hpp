#ifndef FORM_HPP
# define FORM_HPP

# include <string>

class Bureaucrat;

class Form {
	private:
		const std::string name;
		bool sign;
		const int sign_grade;
		const int exe_grade;
	public:
		Form();
		Form(const Form &form);
		Form(const std::string name, int sign_grade, int exe_grade);
		Form &operator=(const Form &form);
		~Form();

		std::string getName() const;
		bool getSign() const;
		int getSignGrade() const;
		int getExeGrade() const;

		void beSigned(const Bureaucrat &brct);

		class GradeTooHighException: public std::exception {
			public:
				const char * what() const throw();
		};
		class GradeTooLowException: public std::exception {
			public:
				const char * what() const throw();
		};
};

std::ostream& operator<<(std::ostream& ostream, const Form& form);

#endif
