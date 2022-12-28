#include "Bureaucrat.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include <iostream>

int main()
{
    {
        RobotomyRequestForm rob("rob");
        Bureaucrat          jiyo("jiyo", 3);

        jiyo.signForm(rob);
        jiyo.executeForm(rob);
    }
    std::cout << "\n\n";
    {
        RobotomyRequestForm rob("rob");
        Bureaucrat          jiyo("jiyo", 55);

        jiyo.signForm(rob);
        jiyo.executeForm(rob);
    }
    std::cout << "\n\n";
    {
        RobotomyRequestForm rob("rob");
        Bureaucrat          jiyo("jiyo", 130);

        jiyo.signForm(rob);
        jiyo.executeForm(rob);
    }

    std::cout << "\n\n";
    std::cout << "PresidentialPardonForm\n";

    {
        PresidentialPardonForm pre("pre");
        Bureaucrat          jiyo("jiyo", 3);

        jiyo.signForm(pre);
        jiyo.executeForm(pre);
    }
    std::cout << "\n\n";
    {
        PresidentialPardonForm pre("pre");
        Bureaucrat          jiyo("jiyo", 24);

        jiyo.signForm(pre);
        jiyo.executeForm(pre);
    }
    std::cout << "\n\n";
    {
        PresidentialPardonForm pre("pre");
        Bureaucrat          jiyo("jiyo", 130);

        jiyo.signForm(pre);
        jiyo.executeForm(pre);
    }

    std::cout << "\n\n";
    std::cout << "ShrubberyCreationForm\n";

    {
        ShrubberyCreationForm shr("shr");
        Bureaucrat          jiyo("jiyo", 3);

        jiyo.signForm(shr);
        jiyo.executeForm(shr);
    }
    std::cout << "\n\n";
    {
        ShrubberyCreationForm shr("shr");
        Bureaucrat          jiyo("jiyo", 140);

        jiyo.signForm(shr);
        jiyo.executeForm(shr);
    }
    std::cout << "\n\n";
    {
        ShrubberyCreationForm shr("shr");
        Bureaucrat          jiyo("jiyo", 146);

        jiyo.signForm(shr);
        jiyo.executeForm(shr);
    }
    return 0;    
}
