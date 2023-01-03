#include "Bureaucrat.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include <iostream>

int main()
{
    std::cout << "------------valid------------------\n";
    {
        RobotomyRequestForm rob("rob");
        Bureaucrat          jiyo("jiyo", 3);

        jiyo.signForm(rob);
        jiyo.executeForm(rob);
    }
    std::cout << "\n------------excute invalid------------------\n";
    {
        RobotomyRequestForm rob("rob");
        Bureaucrat          jiyo("jiyo", 55);

        jiyo.signForm(rob);
        jiyo.executeForm(rob);
    }
    std::cout << "\n------------sign invalid------------------\n";
    {
        RobotomyRequestForm rob("rob");
        Bureaucrat          jiyo("jiyo", 130);

        jiyo.signForm(rob);
        jiyo.executeForm(rob);
    }

    std::cout << "\n\n";
    std::cout << "PresidentialPardonForm\n";
    std::cout << "------------valid------------------\n";
    {
        PresidentialPardonForm pre("pre");
        Bureaucrat          jiyo("jiyo", 3);

        jiyo.signForm(pre);
        jiyo.executeForm(pre);
    }
    std::cout << "\n------------excute invalid------------------\n";
    {
        PresidentialPardonForm pre("pre");
        Bureaucrat          jiyo("jiyo", 24);

        jiyo.signForm(pre);
        jiyo.executeForm(pre);
    }
    std::cout << "\n------------sign invalid------------------\n";
    {
        PresidentialPardonForm pre("pre");
        Bureaucrat          jiyo("jiyo", 130);

        jiyo.signForm(pre);
        jiyo.executeForm(pre);
    }

    std::cout << "\n\n";
    std::cout << "ShrubberyCreationForm\n";
    std::cout << "------------valid------------------\n";
    {
        ShrubberyCreationForm shr("shr");
        Bureaucrat          jiyo("jiyo", 3);

        jiyo.signForm(shr);
        jiyo.executeForm(shr);
    }
    std::cout << "\n------------excute invalid------------------\n";
    {
        ShrubberyCreationForm shr("shr");
        Bureaucrat          jiyo("jiyo", 140);

        jiyo.signForm(shr);
        jiyo.executeForm(shr);
    }
    std::cout << "\n------------sign invalid------------------\n";
    {
        ShrubberyCreationForm shr("shr");
        Bureaucrat          jiyo("jiyo", 146);

        jiyo.signForm(shr);
        jiyo.executeForm(shr);
    }
    return 0;    
}
