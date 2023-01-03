#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <string>
# include <exception>

class Bureaucrat
{
    private:
        const std::string   _name;
        int                 _grade;

    public:
        Bureaucrat(void);
        Bureaucrat(const std::string name, int grade);
        Bureaucrat(const Bureaucrat &obj);
        ~Bureaucrat();
        Bureaucrat& operator=(const Bureaucrat& obj);

        const std::string       getName() const;
        int                     getGrade() const;

        void                incrementGrade();
        void                decrementGrade();

        std::out_of_range   GradeTooHighException() const;
        std::out_of_range   GradeTooLowException() const;
};

std::ostream& operator<<(std::ostream& o, Bureaucrat const& i);

#endif
